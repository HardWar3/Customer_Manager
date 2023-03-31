#include <iostream>
#include <iomanip>
#include <vector>

#include "Customer_Export.hpp"

extern int get_menu( void );
extern int get_bool_eingabe( void );
extern int get_zahlen_eingabe( void );
extern void customer_set_interface( CUSTOMER *customer );

int main() {

	int option = 0;
	int customer_id;
	bool weiterer_customer = true;
	bool zurueck_ins_menu = true;
	Customer_Export customer_option;
	CUSTOMER* customer = new CUSTOMER();
	std::vector<CUSTOMER> all_customers;

	while (zurueck_ins_menu) {

		option = get_menu();

		switch (option)
		{
		case 1:

			while (weiterer_customer) {

				int zahl_eingabe;

				customer_set_interface(customer);
				customer_option.Set_Customer(customer);

				std::cout << "Soll noch ein weiterer Customer angelegt werden?" << std::endl;
				std::cout << "Für JA ein weiterer Customer : 1" << std::endl;
				std::cout << "und für NEIN kein weiterer Customer : 0" << std::endl;

				weiterer_customer = get_bool_eingabe();
			}
			break;
		case 2:
			all_customers = customer_option.get_all_customers();

			for (int index = 0; index < all_customers.size(); index++) {

				customer_option.get_customer_formatter_by_ID(index);
			}
			break;
		case 3:
			std::cout << "Customer by ID" << std::endl;
			customer_id = get_zahlen_eingabe();

			customer_option.get_customer_formatter_by_ID(customer_id);
			break;
		case 4:

			customer_option.export_customers();
			break;
		default:
			break;
		}
		std::cout << "Wollen Sie zurück ins Menu oder wollen Sie das Programm Beenden?" << std::endl;
		std::cout << "Für zurück ins Menu : 1" << std::endl;
		std::cout << "Für Beenden des Programmes : 0" << std::endl;

		zurueck_ins_menu = get_bool_eingabe();
	}
	delete customer;
}
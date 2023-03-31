#include <iostream>
#include <string>

#include "customer.h"

extern int get_zahlen_eingabe( void );
extern bool pruefe_interface_eingabe_string_laenge(std::string eingabe, int laenge);
extern bool pruefe_interface_eingabe_favoriten_farbe(int eingabe);

void set_customer_interface_eingabe_by_option( CUSTOMER *customer, int option) {

	std::string string_eingabe{};
	int color_eingabe;
	bool ist_eingabe_korrekt = true;

	bool ist_option_zwischen_1_und_4 = option != 5;

	if (ist_option_zwischen_1_und_4) {

		bool ist_option_1 = option == 1;
		bool ist_option_2_oder_4 = option == 2 || option == 4;

		if (ist_option_1) {
			while (ist_eingabe_korrekt) {

				std::cin >> string_eingabe;
				ist_eingabe_korrekt = pruefe_interface_eingabe_string_laenge(string_eingabe, 23);
			}
			strcpy_s(customer->first_name, string_eingabe.c_str());
		} else if (ist_option_2_oder_4) {
			while (ist_eingabe_korrekt) {

				std::cin >> string_eingabe;
				ist_eingabe_korrekt = pruefe_interface_eingabe_string_laenge(string_eingabe, 31);
			}
			if (option == 2) {
				strcpy_s(customer->last_name, string_eingabe.c_str());
			} else {			
				strcpy_s(customer->city, string_eingabe.c_str());
			}
		} else {
			while (ist_eingabe_korrekt) {

				std::cin >> string_eingabe;
				ist_eingabe_korrekt = pruefe_interface_eingabe_string_laenge(string_eingabe, 7);
			}
			strcpy_s(customer->zip_code, string_eingabe.c_str());
		}
	} else {
		while (ist_eingabe_korrekt) {

			color_eingabe = get_zahlen_eingabe();
			
			ist_eingabe_korrekt = pruefe_interface_eingabe_favoriten_farbe(color_eingabe);
		}
		customer->favorite_color = color_eingabe;
	}
}
#include <iostream>
#include <string>

#include "Customer_Repository.hpp"

extern void set_customer_interface_eingabe_by_option( CUSTOMER *customer, int option );

void customer_set_interface( CUSTOMER *customer ) {

	std::cout << "Geben Sie den Vornamen vom Customer an :" << std::endl;
	std::cout << "(Der Vorname darf nicht länger als 23 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 1);

	std::cout << "Geben Sie den Nachnamen vom Customer an :" << std::endl;
	std::cout << "(Der Nachname darf nicht länger als 31 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 2);

	std::cout << "Geben Sie die Postleitzahl vom Customer an :" << std::endl;
	std::cout << "(Die Postleitzahl darf nicht länger als 7 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 3);

	std::cout << "Geben Sie die Stadt vom Customer an :" << std::endl;
	std::cout << "(Die Stadt darf nicht länger als 31 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 4);

	std::cout << "Geben Sie die Favoriten Farbe mit einer Zahl vom Customer an :" << std::endl;
	std::cout << "Zur auswahl stehen :" << std::endl;
	std::cout << COLOR_BLUE << " steht für Blau" << std::endl;
	std::cout << COLOR_GREEN << " steht für Grün" << std::endl;
	std::cout << COLOR_VIOLET << " steht für Lila" << std::endl;
	std::cout << COLOR_RED << " steht für Rot" << std::endl;
	std::cout << COLOR_YELLOW << " steht für Gelb" << std::endl;
	std::cout << COLOR_TURQUOISE << " steht für Türkis" << std::endl;
	std::cout << COLOR_WHITE << " steht für Weis" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 5);
}
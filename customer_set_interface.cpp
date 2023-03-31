#include <iostream>
#include <string>

#include "Customer_Repository.hpp"

extern void set_customer_interface_eingabe_by_option( CUSTOMER *customer, int option );

void customer_set_interface( CUSTOMER *customer ) {

	std::cout << "Geben Sie den Vornamen vom Customer an :" << std::endl;
	std::cout << "(Der Vorname darf nicht l�nger als 23 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 1);

	std::cout << "Geben Sie den Nachnamen vom Customer an :" << std::endl;
	std::cout << "(Der Nachname darf nicht l�nger als 31 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 2);

	std::cout << "Geben Sie die Postleitzahl vom Customer an :" << std::endl;
	std::cout << "(Die Postleitzahl darf nicht l�nger als 7 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 3);

	std::cout << "Geben Sie die Stadt vom Customer an :" << std::endl;
	std::cout << "(Die Stadt darf nicht l�nger als 31 Zeichen sein)" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 4);

	std::cout << "Geben Sie die Favoriten Farbe mit einer Zahl vom Customer an :" << std::endl;
	std::cout << "Zur auswahl stehen :" << std::endl;
	std::cout << COLOR_BLUE << " steht f�r Blau" << std::endl;
	std::cout << COLOR_GREEN << " steht f�r Gr�n" << std::endl;
	std::cout << COLOR_VIOLET << " steht f�r Lila" << std::endl;
	std::cout << COLOR_RED << " steht f�r Rot" << std::endl;
	std::cout << COLOR_YELLOW << " steht f�r Gelb" << std::endl;
	std::cout << COLOR_TURQUOISE << " steht f�r T�rkis" << std::endl;
	std::cout << COLOR_WHITE << " steht f�r Weis" << std::endl;
	set_customer_interface_eingabe_by_option(customer, 5);
}
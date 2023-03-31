#include <iostream>

#include "customer.h"

extern bool pruefe_option( int option );
extern int get_zahlen_eingabe( void );

int get_menu() {

	int option;
	bool ist_die_eingabe_valide = true;

	while (ist_die_eingabe_valide) {

		std::cout << "Welche Option möchtest Du Wählen?" << std::endl;
		std::cout << "1: add Customer" << std::endl;
		std::cout << "2: retrieve all Customers" << std::endl;
		std::cout << "3: retrieve Customer by ID" << std::endl;
		std::cout << "4: expot in File or Database(sql file)" << std::endl;

		option = get_zahlen_eingabe();

		ist_die_eingabe_valide = pruefe_option(option);
	};
	return option;
}
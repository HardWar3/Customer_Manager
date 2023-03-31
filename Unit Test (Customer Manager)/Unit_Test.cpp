#include <iostream>
#include <string>

bool pruefe_interface_eingabe_string_laenge(std::string eingabe, int laenge);
extern bool pruefe_interface_eingabe_favoriten_farbe(int eingabe);
extern bool pruefe_option(int option);

int main() {

	std::cout << "Unit Test" << std::endl;

	if (pruefe_option(1)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (pruefe_option(2)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (pruefe_option(3)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (pruefe_option(4)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (!pruefe_option(0)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (!pruefe_option(INT_MAX)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (!pruefe_option(INT_MIN)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (pruefe_interface_eingabe_string_laenge("qqqqqqqqq", 9)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_string_laenge("1234567890123456", 16)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_string_laenge("", 0)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (pruefe_interface_eingabe_favoriten_farbe(1)) {

		std::cout << "Durchgefallen" << std::endl;
	}

	if (pruefe_interface_eingabe_favoriten_farbe(2)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_favoriten_farbe(3)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_favoriten_farbe(4)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_favoriten_farbe(5)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_favoriten_farbe(6)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (pruefe_interface_eingabe_favoriten_farbe(7)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (!pruefe_interface_eingabe_favoriten_farbe(0)) {

		std::cout << "Durchgefallen" << std::endl;
	}	
	
	if (!pruefe_interface_eingabe_favoriten_farbe(INT_MAX)) {

		std::cout << "Durchgefallen" << std::endl;
	}

}
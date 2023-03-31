#include <iostream>

int get_zahlen_eingabe() {

	int eingabe;
	bool ist_eingabe_eine_zahl = true;

	while (ist_eingabe_eine_zahl) {

		try {
	
			std::cin >> eingabe;

			if (std::cin.fail()) {
				throw "Keine Zahl";
			}
			ist_eingabe_eine_zahl = !true;
		}
		catch (...) {
	
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Bitte nur Zahlen!" << std::endl;
	
			ist_eingabe_eine_zahl = !false;
		}
	}
	return eingabe;
}
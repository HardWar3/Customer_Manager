#include <iostream>

int get_bool_eingabe() {

	int eingabe;
	bool ist_eingabe_eine_0_oder_1 = true;

	while (ist_eingabe_eine_0_oder_1) {

		try {

			std::cin >> eingabe;

			if (std::cin.fail()) {
				throw "Keine Zahl";
			}
		}
		catch (...) {

			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Bitte nur Zahlen!" << std::endl;
		}
		if (!(eingabe < 0 || eingabe > 1)) {

			ist_eingabe_eine_0_oder_1 = !true;
		} else {
			std::cout << "Bitte nur 0 oder 1!" << std::endl;
		}
	}
	return eingabe;
}
#include <iostream>

bool pruefe_interface_eingabe_string_laenge(std::string eingabe, int laenge) {

	bool ist_eingabe_laenge_korrekt = eingabe.size() < laenge+1;

	if (ist_eingabe_laenge_korrekt) {

		return !true;
	}
	return !false;
}

bool pruefe_interface_eingabe_favoriten_farbe(int eingabe) {

	bool ist_zahl_zwischen_1_und_7 = eingabe > 0 && eingabe < 8;

	if (ist_zahl_zwischen_1_und_7) {

		return !true;
	}
	return !false;
}
#include "unittest_helper.hpp"

bool pruefe_option( int option ) {

	bool ist_option_zwischen_1_und_4 = !(option < 1 || option > 4);

	if (ist_option_zwischen_1_und_4) { 
	
		return !true;
	}
	return !false;
}
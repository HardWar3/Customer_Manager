#include <vector>
#include <iostream>

#include "Customer_Repository.hpp"

class Customer_Formatter : public Customer_Repository {

public:

	void get_customer_formatter_by_ID(int id) {

		std::string color_name;

		member_customer = get_customer_by_ID(id);

		if (member_customer.id == 0 && member_customer.favorite_color == 0) {

			std::cout << "(no customer)" << std::endl;
		}
		else {
			std::cout << member_customer.last_name << ", ";
			std::cout << member_customer.first_name << ", ";
			std::cout << member_customer.zip_code << " ";
			std::cout << member_customer.city << ", ";
			color_name = get_customer_favorite_color_name(member_customer.favorite_color);
			std::cout << color_name << std::endl;
		}
	}

	std::string get_customer_favorite_color_name(int favorite_color) {

		std::string color_name;

		switch (favorite_color)
		{
			case COLOR_BLUE:
				color_name = "Blau";
				break;
			case COLOR_GREEN:
				color_name = "Grün";
				break;
			case COLOR_VIOLET:
				color_name = "Lila";
				break;
			case COLOR_RED:
				color_name = "Rot";
				break;
			case COLOR_YELLOW:
				color_name = "Gelb";
				break;
			case COLOR_TURQUOISE:
				color_name = "Türkis";
				break;
			case COLOR_WHITE:
				color_name = "Weis";
				break;
			default:
				color_name = "(no color)";
				break;
		};
		return color_name;
	}
};
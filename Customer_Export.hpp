#include <vector>
#include <iostream>
#include <fstream>

#include "Customer_Formatter.hpp"

extern int get_zahlen_eingabe();
extern int get_bool_eingabe();

class Customer_Export : public Customer_Formatter {

public:

	void export_customers() {

		int customer_id;
		bool ist_format_sql_gewaehlt;
		bool ist_id_gewaehlt;
		bool ist_ein_customer_gewaehlt;
		std::string file_name;
		std::string sql_table_name;

		std::cout << "In Welchen Format soll die Ausgabe sein?" << std::endl;
		std::cout << "0 : für txt File" << std::endl;
		std::cout << "1 : für sql File" << std::endl;
		ist_format_sql_gewaehlt = get_bool_eingabe();

		std::cout << "Bitte geben Sie dem File einen Namen." << std::endl;
		std::cin >> file_name;

		if (ist_format_sql_gewaehlt) {

			file_name = file_name + ".sql";

			std::cout << "Nennen Sie den Tabellen Namen." << std::endl;
			std::cin >> sql_table_name;
		} else {

			file_name = file_name + ".txt";
		}

		std::ofstream export_file ( file_name );

		std::cout << "Soll die ID mit angegeben werden?" << std::endl;
		std::cout << "0 : für nein" << std::endl;
		std::cout << "1 : für ja" << std::endl;
		ist_id_gewaehlt = get_bool_eingabe();

		std::cout << "Alle Customers oder nur einen Customer?" << std::endl;
		std::cout << "0 : für alle Customers" << std::endl;
		std::cout << "1 : für einen Customer" << std::endl;
		ist_ein_customer_gewaehlt = get_bool_eingabe();

		if (ist_ein_customer_gewaehlt) {

			std::cout << "Bitte geben sie die ID des Customers an." << std::endl;
			customer_id = get_zahlen_eingabe();
		}
		if (export_file.is_open()) {

			for (int index = 0; index < customers.size(); index++) {
				
				if (ist_ein_customer_gewaehlt) {

					member_customer = get_customer_by_ID(customer_id);
				} else {

					member_customer = get_customer_by_ID(index);
				}
				if (member_customer.id == 0 && member_customer.favorite_color == 0) {

					std::cout << "(no customer)" << std::endl;
				} else {
					std::string color_name = get_customer_favorite_color_name(member_customer.favorite_color);
					
					if (ist_format_sql_gewaehlt) {

						export_file << "INSERT INTO " + sql_table_name + " VALUES (";

						if (ist_id_gewaehlt) {

							export_file << member_customer.id << ", ";
						}
						export_file << "'" << member_customer.last_name << "', ";
						export_file << "'" << member_customer.first_name << "', ";
						export_file << "'" << member_customer.zip_code << " ";
						export_file << member_customer.city << "', ";
						export_file << "'" << color_name + "');" + "\n";
					} else {

						if (ist_id_gewaehlt) {

							export_file << member_customer.id << ", ";
						}
						export_file << member_customer.last_name << ", ";
						export_file << member_customer.first_name << ", ";
						export_file << member_customer.zip_code << " ";
						export_file << member_customer.city << ", ";
						export_file << color_name + "\n";
					}
				}
				if (ist_ein_customer_gewaehlt) {

					break;
				}
			}
			export_file.close();
		} else {

			std::cout << "Datei konnte nicht geöffnet werden";
		}
	}
};
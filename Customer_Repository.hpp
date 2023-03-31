#pragma once

#include <vector>
#include <iostream>

#include "customer.h"

class Customer_Repository {

protected:

	std::vector<CUSTOMER> customers;
	CUSTOMER member_customer;

public:

	void Set_Customer( CUSTOMER *customer ) {

		member_customer.id = customers.size();
		strcpy_s(member_customer.first_name, 24, customer->first_name);
		strcpy_s(member_customer.last_name, 32, customer->last_name);
		strcpy_s(member_customer.zip_code, 8, customer->zip_code);
		strcpy_s(member_customer.city, 32, customer->city);
		member_customer.favorite_color = customer->favorite_color;

		customers.push_back(member_customer);
	}

	std::vector<CUSTOMER> get_all_customers() {
		return customers;
	}

	CUSTOMER get_customer_by_ID(int id) {

		if (id <= customers.size() && !customers.empty()) {

			member_customer.id = customers[id].id;
			strcpy_s(member_customer.first_name,customers[id].first_name);
			strcpy_s(member_customer.last_name,customers[id].last_name);
			strcpy_s(member_customer.zip_code,customers[id].zip_code);
			strcpy_s(member_customer.city,customers[id].city);
			member_customer.favorite_color = customers[id].favorite_color;

			return member_customer;
		} else {

			return CUSTOMER{ 0,"","","","",0 };
		}
	}
};
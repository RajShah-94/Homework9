/*
 * main.cpp
 *
 *  Created on: 27 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include "Employee.hpp"
#include "Friend.hpp"
#include <vector>


int main()
{
	Employee joe("Joe", "Butcher");
	Friend john("John");
	std::vector<Person> people;
	people.push_back(joe);
	people.push_back(john);

	int n = people.size();

	for (int i = 0; i < n; i++) {
		people[i].Print();
	}


	// design flaw is that it will call upon the Base::Function() as opposed to the Derived::Function()

	
}


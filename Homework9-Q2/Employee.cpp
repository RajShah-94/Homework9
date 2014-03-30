/*
 * Employee.cpp
 *
 *  Created on: 27 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include "Employee.hpp"

void Employee::Print() const { Person::Print(); std::cout <<Employee::job << std::endl; }

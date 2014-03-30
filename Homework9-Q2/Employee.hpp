/*
 * Employee.hpp
 *
 *  Created on: 27 Mar 2014
 *      Author: Raj Shah 120695027
 */

#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include "Person.hpp"

class Employee : public Person {
public:
	Employee(const std::string & name, const std::string & job): job(job) ,Person(name)  {; } 
	~Employee() { ; } 
	
	void Print() const;

private:
	std::string job;
};



#endif /*EMPLOYEE_HPP_ */

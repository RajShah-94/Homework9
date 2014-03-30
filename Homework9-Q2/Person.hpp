/*
 *Person.hpp
 *
 *  Created on: 27 Mar 2014
 *      Author: Raj Shah 120695027
 */

#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <string>
#include <iostream>


class Person {

	std::string name;

public:
	Person(const std::string &Name = "Anonymous") :name(Name){}
	~Person(){}
	void setName(const std::string &newName){ name = newName; }
	std::string getName(){ return name; }
	virtual void Print() const;




};



#endif /* PERSON_HPP_ */

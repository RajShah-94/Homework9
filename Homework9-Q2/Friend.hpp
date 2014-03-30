/*
 * Friend.hpp
 *
 *  Created on: 27 Mar 2014
 *      Author: Raj Shah 120695027
 */

#ifndef FRIEND_HPP_
#define FRIEND_HPP_
#include "Person.hpp"

class Friend : public Person{

public:
	Friend(const std::string name) :Person(name) {}
	~Friend(){}
	void Print() const; 




};

#endif /*FRIEND_HPP_*/

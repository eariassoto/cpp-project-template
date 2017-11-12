#include <stdexcept>
#include "Person.h"

Person::Person(std::string name) {
	if(name.empty()){
		throw std::invalid_argument("Name cannot be empty.");
	}
	this->name = name;
};

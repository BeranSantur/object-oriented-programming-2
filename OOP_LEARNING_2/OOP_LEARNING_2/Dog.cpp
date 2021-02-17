#include "Dog.h"

void Dog::set_name(std::string enteredName)
{
	name = enteredName;
}
std::string Dog::get_name() {
	return name;
}

void Dog::set_age(int enteredAge) {
	age = enteredAge;
}
 int Dog::get_age() {
	 return age;
}

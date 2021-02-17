#include <string>
#pragma once
class Dog
{

	std::string name;
	int age;
	public:
	void set_name(std::string enteredName);
	std::string get_name();

	void set_age(int age);
	int get_age();


};


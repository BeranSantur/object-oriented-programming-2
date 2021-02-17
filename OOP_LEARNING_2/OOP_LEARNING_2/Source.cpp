#include <iostream>
#include "Dog.h"
using namespace std;
int main()
{
	Dog my_dog;
	my_dog.set_name("Karayip");
	std::string dogName = my_dog.get_name();
	my_dog.set_age(5);
	int dogAge = my_dog.get_age();
	cout << "My dog's name is " << dogName <<" and he is "<<dogAge<<" years old."<<endl;

	return 0;
}
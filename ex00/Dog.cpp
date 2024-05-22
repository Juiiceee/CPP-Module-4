#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Destruction d'un Dog\n";
}

void Dog::makeSound()
{
	std::cout << "WAOUF!!!\n";
}

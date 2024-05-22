#include "Animal.hpp"

Animal::Animal() : _type("feur")
{
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Animal &Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Destruction d'un Animal\n";
}

void Animal::makeSound()
{
	std::cout << "Feur!!!\n";
}
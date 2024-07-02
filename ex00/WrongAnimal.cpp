#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("feur")
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destruction d'un WrongAnimal\n";
}

void WrongAnimal::makeSound()
{
	std::cout << "Wrong animal\n";
}

std::string WrongAnimal::getType()
{
	return (this->_type);
}

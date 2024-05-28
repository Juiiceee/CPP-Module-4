#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "Destruction d'un WrongCat\n";
}

void WrongCat::makeSound()
{
	std::cout << "Meow!!!\n";
}

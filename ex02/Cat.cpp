#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
	this->_brain = new Brain;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		this->_type = obj._type;
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destruction d'un Cat\n";
}

void Cat::makeSound()
{
	std::cout << "Meow!!!\n";
}

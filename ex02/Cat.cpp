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
	if (this == &obj)
		return (*this);
	delete this->_brain;
	this->_brain = new Brain(*obj._brain);
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destruction d'un Cat\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow!!!\n";
}

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called\n";
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destruction d'un Brain\n";
}

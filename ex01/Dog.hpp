#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog : public Animal
{
	private:
		
	public:
		Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		~Dog();
		void makeSound();
};
#endif

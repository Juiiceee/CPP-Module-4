#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	/*Animal *Elliot = new Cat;
	Animal *Lana = new Dog;
	WrongAnimal *Rudeck = new WrongCat;
	Elliot->makeSound();
	std::cout << "Elliot " << Elliot->getType() << std::endl;
	Lana->makeSound();
	std::cout << "Lana " << Lana->getType() << std::endl;
	Rudeck->makeSound();
	std::cout << "Rudeck " << Rudeck->getType() << std::endl;*/
	Animal *tab[4] = {new Cat(), new Cat(), new Dog(), new Dog()};

	for (int i = 0; i < 4; i++)
		delete tab[i];

	/*delete Elliot;
	delete Rudeck;
	delete Lana;*/
}

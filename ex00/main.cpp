#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *meta = new Animal();
	Animal *Elliot = new Cat;
	Animal *Lana = new Dog;
	WrongAnimal *Rudeck = new WrongCat;
	WrongAnimal *caca = new WrongAnimal;
	Elliot->makeSound();
	std::cout << "Elliot " << Elliot->getType() << std::endl;
	Lana->makeSound();
	std::cout << "Lana " << Lana->getType() << std::endl;
	Rudeck->makeSound();
	std::cout << "Rudeck " << Rudeck->getType() << std::endl;
	meta->makeSound();
	std::cout << "meta " << meta->getType() << std::endl;
	caca->makeSound();
	std::cout << "caca " << caca->getType() << std::endl;
	delete meta;
	delete Elliot;
	delete Rudeck;
	delete Lana;
}

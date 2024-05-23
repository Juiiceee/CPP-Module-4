#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	/*Animal Ani;
	Ani.makeSound();
	Cat Elliot;
	Elliot.makeSound();
	Dog Lana;
	Lana.makeSound();*/

	Animal *Elliot = new Cat;
	Animal *Lana = new Dog;
	WrongAnimal *Rudeck = new WrongCat;
	Elliot->makeSound();
	std::cout << "Elliot " << Elliot->getType() << std::endl;
	Lana->makeSound();
	std::cout << "Lana " << Lana->getType() << std::endl;
	Rudeck->makeSound();
	std::cout << "Rudeck " << Rudeck->getType() << std::endl;
	delete Elliot;
	delete Rudeck;
	delete Lana;
	/*Cat Elliot;
	Elliot.makeSound();
	Dog Lana;
	Lana.makeSound();*/
}
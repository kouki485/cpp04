#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal p;
	Animal q("q");
	Cat c;
	Dog d;

	p = q;
	p.makeSound();
	c.makeSound();
	d.makeSound();
}
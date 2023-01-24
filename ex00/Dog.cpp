#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << this->type << " constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << this->type << " destructor called." << std::endl;
}

Dog::Dog(const Dog &rhs): Animal(rhs) {}

Dog &Dog::operator=(const Dog &rhs)
{
	if(this != &rhs)
		Animal::type = rhs.Animal::type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wan Wan!" << std::endl;
}
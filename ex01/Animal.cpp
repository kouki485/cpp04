#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Default Animal constructor called." << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal(" << this->type << ")constructor called." << std::endl;
}

Animal::Animal(const Animal &rhs):type(rhs.getType())
{
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::string Animal::getType() const{	return this->type;}

void Animal::makeSound() const
{
	std::cout << "Animal Animal!" << std::endl;
}

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "WrongAnimal(" << this->type << ")constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs):type(rhs.getType())
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if(this != &rhs)
		this->type = rhs.type;
	return *this;
}

std::string WrongAnimal::getType() const{	return this->type;}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal WrongAnimal!" << std::endl;
}

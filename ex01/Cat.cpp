#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << this->type << " constructor called." << std::endl;
}

Cat::~Cat()
{
	std::cout << this->type << " destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if(this != &rhs)
		Animal::type = rhs.Animal::type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Nyan Nyan!" << std::endl;
}
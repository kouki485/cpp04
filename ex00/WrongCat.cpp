#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << this->type << " constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << this->type << " destructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	if(this != &rhs)
		WrongAnimal::type = rhs.WrongAnimal::type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Nyao Nyao!" << std::endl;
}
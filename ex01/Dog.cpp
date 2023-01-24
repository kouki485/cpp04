#include "Dog.hpp"

Dog::Dog():Animal("Dog"),brain_(new Brain("Dog"))
{
	std::cout << this->type << " constructor called." << std::endl;
}

Dog::~Dog()
{
	if(brain_)
		delete brain_;
	std::cout << this->type << " destructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
	Animal::type = rhs.Animal::type;
	delete brain_;
	if(rhs.brain_)
		brain_ = new Brain(*(rhs.brain_));
	else
		brain_ = NULL;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wan Wan!" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	if(rhs.brain_)
		brain_ = new Brain(*(rhs.brain_));
	else
		brain_ = NULL;
}

Brain *Dog::get_brain_() const {	return brain_;}

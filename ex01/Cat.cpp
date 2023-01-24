#include "Cat.hpp"

Cat::Cat():Animal("Cat"),brain_(new Brain("Cat"))
{
	std::cout << this->type << " constructor called." << std::endl;
}

Cat::~Cat()
{
	if(brain_)
		delete brain_;
	std::cout << this->type << " destructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
	Animal::type = rhs.Animal::type;
	delete brain_;
	if(rhs.brain_)
		brain_ = new Brain(*(rhs.brain_));
	else
		brain_ = NULL;
	return *this;
}

Cat::Cat(const Cat &rhs)
{
	if(rhs.brain_)
		brain_ = new Brain(*(rhs.brain_));
	else
		brain_ = NULL;
}

void Cat::makeSound() const
{
	std::cout << "Nyan Nyan!" << std::endl;
}

Brain *Cat::get_brain_() const {	return brain_;}
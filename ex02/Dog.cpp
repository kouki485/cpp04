#include "Dog.hpp"
#include <stdio.h>
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
	std::cout << "operator=" << std::endl;
	Animal::type = rhs.Animal::type;
	//printf("this->brain_:%p\nrhs.brain_:%p\n",this->brain_,rhs.brain_);
	delete brain_;
	printf("this->brain_:%p\nrhs.brain_:  %p\n",this->brain_,rhs.brain_);
	if(rhs.brain_)
	{
		std::cout << "++++++++++++++++++++" << std::endl;
		brain_ = new Brain(*(rhs.brain_));
	}
		
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
	std::cout << "copy constructor" << std::endl;
	if(rhs.brain_)
		brain_ = new Brain(*(rhs.brain_));
	else
		brain_ = NULL;
}

Brain *Dog::get_brain_() const {	return brain_;}

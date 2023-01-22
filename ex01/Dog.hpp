#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
class Dog:public Animal
{
	private:
		Brain	*B;
	public:
		void makeSound() const;
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		Dog();
		virtual ~Dog();
};

#endif
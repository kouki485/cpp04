#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Dog:public Animal
{
	private:
		Brain	*brain_;
	public:
		void makeSound() const;
		Dog(const Dog &rhs);
		Dog &operator=(const Dog &rhs);
		Dog();
		virtual ~Dog();
		Brain *get_brain_() const;
};

#endif
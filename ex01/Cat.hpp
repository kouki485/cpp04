#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat:public Animal
{
	public:
		void makeSound() const;
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		Cat();
		virtual ~Cat();
};

#endif
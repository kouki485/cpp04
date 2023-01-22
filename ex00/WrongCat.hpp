#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
	public:
		void makeSound() const;
		WrongCat(const WrongCat &rhs);
		WrongCat &operator=(const WrongCat &rhs);
		WrongCat();
		virtual ~WrongCat();
};

#endif
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain	*brain_;
	public:
		void makeSound() const;
		Cat(const Cat &rhs);
		Cat &operator=(const Cat &rhs);
		Cat();
		virtual ~Cat();
		Brain *get_brain_() const;
};

#endif
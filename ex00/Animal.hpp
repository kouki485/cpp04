#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		virtual void makeSound() const;
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal &rhs);//right hand side
		Animal &operator=(const Animal &rhs);
		std::string getType() const;
};

#endif
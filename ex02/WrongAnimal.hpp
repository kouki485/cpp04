#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		void makeSound() const;
		WrongAnimal();
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &rhs);//right hand side
		WrongAnimal &operator=(const WrongAnimal &rhs);
		std::string getType() const;
};

#endif
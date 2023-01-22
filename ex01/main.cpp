#include "All.hpp"

int main()
{
	std::cout << "\033[31m ----------------Constructor--------------- \033[m" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrong_animal = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	std::cout << std::endl;

	std::cout << "\033[32m ------------------Type-------------------- \033[m" << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << wrong_animal->getType() << std::endl;
	std::cout << wrong_cat->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "\033[33m ----------------makeSound----------------- \033[m" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "\033[34m ----------------Wrong sound--------------- \033[m" << std::endl;
	wrong_animal->makeSound();
	wrong_cat->makeSound();
	std::cout << std::endl;

	std::cout << "\033[36m ----------------Destructor---------------- \033[m" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wrong_animal;
	delete wrong_cat;
	std::cout << "\033[35m -------------------leaks------------------ \033[m" << std::endl;
	system("leaks -q Animal");
	return 0;
}
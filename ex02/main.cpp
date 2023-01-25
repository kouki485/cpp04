#include "All.hpp"

int main()
{
	const int i = 8;
	std::cout << "\033[31m ----------------Constructor--------------- \033[m" << std::endl;

	//Animal a; compile errorになる。
	Animal *animals[i];
	for(int j = 0;j < i; j++)
	{
		if(j % 2 == 0)
			animals[j] = new Dog();
		else
			animals[j] = new Cat();
	}
	Cat *c = new Cat;
	Cat *c_cpy = new Cat(*c);
	std::cout << "\033[32m ------------------copy compare-------------------- \033[m" << std::endl;
	std::cout << "Cat *c            :" << (void *) c <<std::endl;
	std::cout << "c->get_brain_     :" << (void *) c->get_brain_() <<std::endl;
	std::cout << "Cat *c_cpy        :" << (void *) c_cpy <<std::endl;
	std::cout << "c_cpy->get_brain_ :" << (void *) c_cpy->get_brain_() <<std::endl;
	std::cout << "\033[36m ----------------Destructor---------------- \033[m" << std::endl;
	delete c;
	delete c_cpy;
	for(int j = 0;j < i; j++)
			delete animals[j];
	std::cout << "\033[35m -------------------leaks------------------ \033[m" << std::endl;
	system("leaks -q Animal");
}
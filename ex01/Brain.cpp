#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0;i < 100;i++)
		ideas[i] = "";
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy constructor called." << std::endl;
	if(this != &rhs)
		for(int i;i < 100;i++)
			ideas[i] = rhs.ideas[i];
	return *this;
}

const std::string *Brain::get_idea() const{	return ideas;}

Brain::Brain(std::string idea)
{
	for(int i = 0;i < 100;i++)
		ideas[i] = idea;
	std::cout << "Brain constructor called." << std::endl;
}


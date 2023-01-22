#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0;i < 100;i++)
		ideas[i] = "Brain";
	std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &rhs)
{
	if(this != &rhs)
	return *this;
}

const std::string *Brain::get_idea() const{	return ideas;}


#ifndef BRAIN_HPP
#define BRAIN_HPP


#include <iostream>
#include <string>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(const Brain &rhs);
		Brain &operator=(const Brain &rhs);
		Brain(std::string idea);
		Brain();
		virtual ~Brain();
		const std::string *get_idea() const;
};


#endif
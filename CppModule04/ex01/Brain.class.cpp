#include "Brain.class.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	std::vector<std::string> ideas(100);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

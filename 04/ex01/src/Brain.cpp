#include "Brain.hpp"

// Default constructor
Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Brain::Brain(const Brain &other) : ideas(other.ideas)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	return ;
}

// Assignment operator overload
Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain Assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

// Destructor
Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

void	Brain::setIdea(int index, std::string idea)
{
	this->ideas[index] = idea;
	return ;
}

std::string	Brain::getIdea(int index) const
{
	return (this->ideas[index]);
}

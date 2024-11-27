#include "PMergeMe.hpp"

// Default constructor
PMergeMe::PMergeMe(void)
{
	// std::cout << "PMergeMe Default constructor called" << std::endl;
	return ;
}

// Input constructor
PMergeMe::PMergeMe()
{
	// std::cout << "PMergeMe Input constructor called" << std::endl;
	return ;
}

// Copy constructor
PMergeMe::PMergeMe(const PMergeMe &other)
{
	// std::cout << "PMergeMe Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
PMergeMe &PMergeMe::operator=(const PMergeMe &other)
{
	// std::cout << "PMergeMe Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
PMergeMe::~PMergeMe(void)
{
	// std::cout << "PMergeMe Destructor called" << std::endl;
	return ;
}


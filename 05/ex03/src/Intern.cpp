#include "Intern.hpp"

// Default constructor
Intern::Intern(void)
{
	// std::cout << "Intern Default constructor called" << std::endl;
	return ;
}

// Input constructor
Intern::Intern()
{
	// std::cout << "Intern Input constructor called" << std::endl;
	return ;
}

// Copy constructor
Intern::Intern(const Intern &other)
{
	// std::cout << "Intern Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
Intern &Intern::operator=(const Intern &other)
{
	// std::cout << "Intern Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
Intern::~Intern(void)
{
	// std::cout << "Intern Destructor called" << std::endl;
	return ;
}


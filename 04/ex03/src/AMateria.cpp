#include "AMateria.hpp"

// Default constructor
AMateria::AMateria(void)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Copy constructor
AMateria::AMateria(const AMateria &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
AMateria::~AMateria(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


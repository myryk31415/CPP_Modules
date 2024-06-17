#include "Ice.hpp"

// Default constructor
Ice::Ice(void) : AMateria("ice")
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Ice::Ice(const Ice &other) : AMateria(other)
{
//	std::cout << "Copy constructor called" << std::endl;
	(void)other;
	return ;
}

// Assignment operator overload
Ice &Ice::operator=(const Ice &other)
{
//	std::cout << "Assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

// Destructor
Ice::~Ice(void)
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}

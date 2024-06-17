#include "Cure.hpp"

// Default constructor
Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

// Assignment operator overload
Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}

// Destructor
Cure::~Cure(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}

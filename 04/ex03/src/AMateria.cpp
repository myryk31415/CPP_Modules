#include "AMateria.hpp"

// Default constructor
AMateria::AMateria(void) : _type("default")
{
//	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Name constructor
AMateria::AMateria(std::string const & type) : _type(type)
{
//	std::cout << "Name constructor called" << std::endl;
	return ;
}

// Copy constructor
AMateria::AMateria(const AMateria &other)
{
//	std::cout << "Copy constructor called" << std::endl;
	this->_type = other._type;
	return ;
}

// Assignment operator overload
AMateria &AMateria::operator=(const AMateria &other)
{
//	std::cout << "Assignment operator called" << std::endl;
	this->_type = other._type;
	return (*this);
}

// Destructor
AMateria::~AMateria(void)
{
//	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void    AMateria::use( ICharacter& target )
{
    std::cout << "AMateria " << this->_type << " used on " << target.getName() << std::endl;
}

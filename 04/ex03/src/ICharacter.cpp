#include "ICharacter.hpp"

// Default constructor
ICharacter::ICharacter(void) : _name("default")
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Name constructor
ICharacter::ICharacter(std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	this->_name = name;
	return ;
}

// Copy constructor
ICharacter::ICharacter(const ICharacter &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
ICharacter &ICharacter::operator=(const ICharacter &other)
{
	std::cout << "Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
ICharacter::~ICharacter(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


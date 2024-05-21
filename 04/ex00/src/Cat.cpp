#include "Cat.hpp"

// Default constructor
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Cat::Cat(const Cat &other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat Assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

// Destructor
Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}


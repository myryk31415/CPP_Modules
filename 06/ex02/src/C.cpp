#include "C.hpp"

// Default constructor
C::C(void)
{
	// std::cout << "A Default constructor called" << std::endl;
	return ;
}

// Copy constructor
C::C(const C &other)
{
	// std::cout << "A Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
C &C::operator=(const C &other)
{
	// std::cout << "A Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
C::~C(void)
{
	// std::cout << "A Destructor called" << std::endl;
	return ;
}


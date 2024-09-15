#include "A.hpp"

// Default constructor
A::A(void)
{
	// std::cout << "A Default constructor called" << std::endl;
	return ;
}

// Copy constructor
A::A(const A &other)
{
	// std::cout << "A Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
A &A::operator=(const A &other)
{
	// std::cout << "A Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
A::~A(void)
{
	// std::cout << "A Destructor called" << std::endl;
	return ;
}


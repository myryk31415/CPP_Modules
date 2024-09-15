#include "B.hpp"

// Default constructor
B::B(void)
{
	// std::cout << "A Default constructor called" << std::endl;
	return ;
}

// Copy constructor
B::B(const B &other)
{
	// std::cout << "A Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
B &B::operator=(const B &other)
{
	// std::cout << "A Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
B::~B(void)
{
	// std::cout << "A Destructor called" << std::endl;
	return ;
}


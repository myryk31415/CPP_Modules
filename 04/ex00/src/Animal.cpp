#include "Animal.hpp"

// Default constructor
Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

// Type constructor
Animal::Animal(std::string type) : type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
	return ;
}

// Copy constructor
Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = other.type;
	return (*this);
}

// Destructor
Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void)
{
	return (this->type);
}

void	Animal::makeSound(void)
{

}

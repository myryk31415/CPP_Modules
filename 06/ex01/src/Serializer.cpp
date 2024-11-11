#include "Serializer.hpp"

// Copy constructor
Serializer::Serializer(const Serializer &other)
{
	// std::cout << "Serializer Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
Serializer &Serializer::operator=(const Serializer &other)
{
	// std::cout << "Serializer Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
Serializer::~Serializer(void)
{
	// std::cout << "Serializer Destructor called" << std::endl;
	return ;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

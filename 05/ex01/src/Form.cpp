#include "Form.hpp"

// Default constructor
Form::Form(void)
{
	std::cout << "Default constructor called" << std::endl;
	_signed = false;
	_name = "defaul";
	return ;
}

Form::Form(std::string name, int grade) : _name(name)
{
	std::cout << "Default constructor called" << std::endl;
	if (grade < 1 || grade > 150)
		throw std::exception();
	_grade = grade;
	return ;
}

// Copy constructor
Form::Form(const Form &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
Form &Form::operator=(const Form &other)
{
	std::cout << "Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}


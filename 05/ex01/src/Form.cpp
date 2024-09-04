#include "Form.hpp"

// Default constructor
Form::Form(void) : _name("default"), _signed(false), _grade_sign(100), _grade_exec(100)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int grade_sign, int grade_exec) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	std::cout << "Constructor called" << std::endl;
	if (grade_sign < 1 || grade_exec < 1)
		throw (GradeTooHighException());
	if (grade_sign > 150 || grade_exec > 150)
		throw (GradeTooLowException());
	return ;
}

// Copy constructor
Form::Form(const Form &other) : _name(other.get_name()), _signed(other.is_signed()),
	_grade_sign(other.get_grade_sign()), _grade_exec(other.get_grade_exec())
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
Form &Form::operator=(const Form &other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_signed = other.is_signed();
	return (*this);
}

// Destructor
Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Form::beSigned(Bureaucrat crat)
{
	int			grade;
	std::string	name;

	grade = crat.get_grade();
	name = crat.get_name();
	if (grade > _grade_sign)
	{
		std::cout << name << " couldn't sign " << _name << " because: 'The Grade is too low!'\n";
		throw (GradeTooLowException());
	}
	_signed = true;
	std::cout << name << " signed " << _name << std::endl;
}

std::string	Form::get_name() const
{
	return (this->_name);
}

bool	Form::is_signed() const
{
	return (this->_signed);
}

int	Form::get_grade_sign() const
{
	return (this->_grade_sign);
}

int	Form::get_grade_exec() const
{
	return (this->_grade_exec);
}

const char	*Form::GradeTooHighException::what(void) const throw ()
{
	return ("The grade is too high!\n");
}

const char	*Form::GradeTooLowException::what(void) const throw ()
{
	return ("The grade is too low!\n");
}

std::ostream& operator<<(std::ostream &o, Form const &ref)
{
	o << "Form " << ref.get_name() << " is ";
	if (ref.is_signed())
		o << "signed.";
	else
		o << "not signed.";
	o << std::endl << "grade_sign: " << ref.get_grade_sign();
	o << ", exec_sign: " << ref.get_grade_exec();
	return o;
}

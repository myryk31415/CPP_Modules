#include "Form.hpp"

// Default constructor
AForm::AForm(void) : _name("default"), _target("default_target"), _signed(false), _grade_sign(100), _grade_exec(100)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, std::string target, int grade_sign, int grade_exec) : _name(name), _target(target), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	// std::cout << "Constructor called" << std::endl;
	if (grade_sign < 1 || grade_exec < 1)
		throw (GradeTooHighException());
	if (grade_sign > 150 || grade_exec > 150)
		throw (GradeTooLowException());
	return ;
}

// Copy constructor
AForm::AForm(const AForm &other) : _name(other.get_name()), _signed(other.is_signed()),
	_grade_sign(other.get_grade_sign()), _grade_exec(other.get_grade_exec())
{
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

// Assignment operator overload
AForm &AForm::operator=(const AForm &other)
{
	// std::cout << "Assignment operator called" << std::endl;
	this->_signed = other.is_signed();
	return (*this);
}

// Destructor
AForm::~AForm(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void	AForm::execute(Bureaucrat const & executor) {
	std::string	name;

	name = executor.get_name();
	if (!_signed)
		throw (NotSignedException());
	if (executor.get_grade() > _grade_exec)
		throw (GradeTooLowException());
	_execute();
}

void	AForm::beSigned(Bureaucrat crat)
{
	if (crat.get_grade() > _grade_sign)
		throw (GradeTooLowException());
	_signed = true;
}

std::string	AForm::get_name() const
{
	return (this->_name);
}

std::string	AForm::get_target() const
{
	return (this->_target);
}

bool	AForm::is_signed() const
{
	return (this->_signed);
}

int	AForm::get_grade_sign() const
{
	return (this->_grade_sign);
}

int	AForm::get_grade_exec() const
{
	return (this->_grade_exec);
}

const char	*AForm::GradeTooHighException::what(void) const throw ()
{
	return ("The grade is too high!\n");
}

const char	*AForm::GradeTooLowException::what(void) const throw ()
{
	return ("The grade is too low!\n");
}

const char	*AForm::NotSignedException::what(void) const throw ()
{
	return ("This Form is not signed!\n");
}

std::ostream& operator<<(std::ostream &o, AForm const &ref)
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

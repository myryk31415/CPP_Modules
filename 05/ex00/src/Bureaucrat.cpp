#include "Bureaucrat.hpp"

// Default constructor
Bureaucrat::Bureaucrat(void) : _name("default"), _grade(1)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

// Name constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Default constructor called" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
	return ;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw ()
{
	return ("The grade is too high!\n");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw ()
{
	return ("The grade is too low!\n");
}

std::string	Bureaucrat::get_name(void) const
{
	return _name;
}

int	Bureaucrat::get_grade(void) const
{
	return _grade;
}

void Bureaucrat::increment(void)
{
	if (_grade == 1)
		throw (GradeTooHighException());
	_grade--;
}

void Bureaucrat::decrement(void)
{
	if (_grade == 150)
		throw (GradeTooLowException());
	_grade++;
}

std::ostream& operator<<(std::ostream &o, Bureaucrat const &ref)
{
	o << ref.get_name() << ", bureaucrat grade " << ref.get_grade() << ".";
	return (o);
}

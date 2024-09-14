#include "Intern.hpp"

// Default constructor
Intern::Intern(void)
{
	// std::cout << "Intern Default constructor called" << std::endl;
	return ;
}

// Copy constructor
Intern::Intern(const Intern &other)
{
	// std::cout << "Intern Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
Intern &Intern::operator=(const Intern &other)
{
	// std::cout << "Intern Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
Intern::~Intern(void)
{
	// std::cout << "Intern Destructor called" << std::endl;
	return ;
}

AForm	*createShrubbery(std::string target)
{
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return (new ShrubberyCreationForm(target));
}

AForm	*createRobotomy(std::string target)
{
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm	*createPardon(std::string target)
{
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string type, std::string target)
{
	std::string form_types[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm* (*fn[])(std::string) = {createShrubbery, createRobotomy, createPardon};

	for (int i = 0; i < 3; i++)
		if (form_types[i] == type)
			return fn[i](target);

	std::cout << "No form of type <" << type << "> found\n";
	return (NULL);
}

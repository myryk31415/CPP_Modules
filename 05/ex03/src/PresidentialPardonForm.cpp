#include "PresidentialPardonForm.hpp"

// Default constructor
PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", "default_target", 25, 5)
{
	// std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	return;
}

// Input constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5)
{
	// std::cout << "PresidentialPardonForm Input constructor called" << std::endl;
	return;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other)
{
	// std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
	return;
}

// Assignment operator overload
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	// std::cout << "PresidentialPardonForm Assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << "PresidentialPardonForm Destructor called" << std::endl;
	return;
}

void	PresidentialPardonForm::_execute() const
{
	std::cout <<this->get_target() << " has been pardoned by Rick Astley ;)" << std::endl;
}

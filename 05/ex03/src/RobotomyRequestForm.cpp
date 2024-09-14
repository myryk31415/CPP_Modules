#include "RobotomyRequestForm.hpp"

// Default constructor
RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", "default_target", 72, 45)
{
	// std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
	return;
}

// Input constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45)
{
	// std::cout << "RobotomyRequestForm Input constructor called" << std::endl;
	return;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other)
{
	// std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
	return;
}

// Assignment operator overload
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	// std::cout << "RobotomyRequestForm Assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << "RobotomyRequestForm Destructor called" << std::endl;
	return;
}

void	RobotomyRequestForm::_execute() const
{
	std::cout << "brrrr brr brrr" << std::endl;
	std::srand(std::time(NULL) + std::rand());
	if (rand() % 2)
		std::cout << this->get_target() << " has been robotomized successfully!\n";
	else
		std::cout << "Robotomy has failed!\n";
}

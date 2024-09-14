#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	// private:
		// Aform *createShrubbery(std::string target);
		// Aform *createRobotomy(std::string target);
		// Aform *createPardon(std::string target);

	public:
		Intern(void);
		Intern(const Intern& other);
		Intern &operator=(const Intern &other);
		~Intern();

		AForm	*makeForm(std::string type, std::string target);
};

#endif


#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include
class Intern
{
	public:
		Intern(void);
		Intern();
		Intern(const Intern& other);
		Intern &operator=(const Intern &other);
		~Intern();

		AForm	*makeForm(std::string type, std::string target);
};

#endif


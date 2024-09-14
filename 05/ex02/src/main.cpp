#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	Bureaucrat				testa = Bureaucrat("high", 1);
	Bureaucrat				testb = Bureaucrat("low", 150);
	Form *	form0 = new ShrubberyCreationForm("shrubtarget");
	Form *	form1 = new RobotomyRequestForm("robotomytarget");
	Form *	form2 = new PresidentialPardonForm("presidenttarget");

	testb.executeForm(*form0);

	testa.signForm(*form0);
	testa.signForm(*form1);
	testa.signForm(*form2);

	testb.executeForm(*form0);
	testa.executeForm(*form0);
	testa.executeForm(*form2);

	for (int i = 0; i < 3; i++)
		testa.executeForm(*form1);

	return (0);
}

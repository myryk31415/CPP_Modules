#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Intern		intern;
	Bureaucrat	testa = Bureaucrat("high", 1);
	Bureaucrat	testb = Bureaucrat("low", 150);
	AForm *		form0 = intern.makeForm("ShrubberyCreationForm", "shrubtarget");
	AForm *		form1 = intern.makeForm("RobotomyRequestForm", "robotomytarget");
	AForm *		form2 = intern.makeForm("PresidentialPardonForm", "presidenttarget");
	AForm *		form3 = intern.makeForm("notaform", "presidenttarget");

	(void)form3;	testb.executeForm(*form0);

	testa.signForm(*form0);
	testa.signForm(*form1);
	testa.signForm(*form2);

	testb.executeForm(*form0);
	testa.executeForm(*form0);
	testa.executeForm(*form2);

	for (int i = 0; i < 3; i++)
		testa.executeForm(*form1);

	delete form0;
	delete form1;
	delete form2;
	return (0);
}

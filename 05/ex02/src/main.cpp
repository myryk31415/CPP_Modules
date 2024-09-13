#include "Bureaucrat.hpp"
// #include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat				testa = Bureaucrat("high", 1);
	Bureaucrat				testb = Bureaucrat("low", 150);
	Form *	form0 = new ShrubberyCreationForm("mytarget");

	try
	{
		form0->execute(testb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	testa.signForm(*form0);
	testb.executeForm(*form0);
	testa.executeForm(*form0);
	return (0);
}

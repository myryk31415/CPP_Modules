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
	std::cout << *form0 << std::endl;
	try
	{
		form0->beSigned(testb);
	}
	catch (std::exception &e)
	{
		std::cout << "catched\n";
	}
	try
	{
		testb.signForm(*form0);
	}
	catch (std::exception &e)
	{
		std::cout << "catched\n";
	}
	form0->beSigned(testa);
	std::cout << form0 << std::endl;
	form0->execute(testa);
	return (0);
}

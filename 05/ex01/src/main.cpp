#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	testa = Bureaucrat("high",10);
	Bureaucrat	testb = Bureaucrat("low", 100);
	Form		form0 = Form("NAME", 50, 50);

	std::cout << form0 << std::endl;
	try
	{
		form0.beSigned(testb);
	}
	catch (std::exception &e)
	{
		std::cout << "catched\n";
	}
	try
	{
		testb.signForm(form0);
	}
	catch (std::exception &e)
	{
		std::cout << "catched\n";
	}
	testa.signForm(form0);
	std::cout << form0 << std::endl;
	return (0);
}

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat testa = Bureaucrat("low", 2);
	Bureaucrat testb = Bureaucrat("high", 149);
	Bureaucrat testc = Bureaucrat("too low", -2);
	Bureaucrat testd = Bureaucrat("too high", 200);

	std::cout << testa.get_name() << std::endl;
	std::cout << testa.get_grade() << std::endl;
	std::cout << testb.get_name() << std::endl;
	std::cout << testb.get_grade() << std::endl;

	try
	{
		testa.increment();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP1\n";
	}
	try
	{
		testa.increment();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP2\n";
	}
	std::cout << testa.get_grade() << std::endl;
	try
	{
		testb.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP3\n";
	}
	try
	{
		testb.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP4\n";
	}
	std::cout << testb.get_grade() << std::endl;
}

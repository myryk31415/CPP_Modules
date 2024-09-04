#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat testa = Bureaucrat("high", 2);
	Bureaucrat testb = Bureaucrat("low", 149);
	try
	{
		Bureaucrat testc = Bureaucrat("too high", -2);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat testd = Bureaucrat("too low", 200);
	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}

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
		std::cout << e.what();
	}
	try
	{
		testa.increment();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP2\n";
		std::cout << e.what();
	}
	std::cout << testa.get_grade() << std::endl;
	try
	{
		testb.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP3\n";
		std::cout << e.what();
	}
	try
	{
		testb.decrement();
	}
	catch (std::exception & e)
	{
		std::cout << "HELP4\n";
		std::cout << e.what();
	}
	testa.decrement();
	std::cout << testb.get_grade() << std::endl;
	Bureaucrat teste = Bureaucrat(testa);
	Bureaucrat testf;
	testf = testa;
	std::cout << testa.get_name() << std::endl;
	std::cout << testa.get_grade() << std::endl;
	std::cout << teste.get_name() << std::endl;
	std::cout << teste.get_grade() << std::endl;
	std::cout << testf.get_name() << std::endl;
	std::cout << testf.get_grade() << std::endl;
}

#include <vector>
#include "Span.hpp"

int	main(void)
{
	Span sp = Span(7);
	std::vector<int> vec({25, 9});

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	sp.addNumber(vec.begin(), vec.end());

	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	try
	{
		sp.addNumber(344823);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.addNumber(vec.begin(), vec.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;

	Span one = Span(1);

	try
	{
		std::cout << "shortest span: " << one.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "longest span: " << one.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	one.addNumber(342);

	try
	{
		std::cout << "shortest span: " << one.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "longest span: " << one.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	Span test = Span(3);
	test.addNumber(34);
	Span test2 = test;

	test.addNumber(62);

	try
	{
		std::cout << test2.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << test.shortestSpan() << std::endl;
	return (0);
}


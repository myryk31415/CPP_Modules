#include <iostream>
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	BitcoinExchange tmp;

	if (argc != 2)
	{
		std::cout << "Usage: ./btc path_to_database" << std::endl;
		return 1;
	}
	try
	{
		tmp.read_database("data.csv");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	try
	{
		tmp.read_input(argv[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
}

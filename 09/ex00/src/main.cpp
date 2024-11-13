#include <iostream>
#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 1)
	{
		std::cout << "Usage: ./btc path_to_database" << std::endl;
		return 1;
	}
	(void)argv;

	BitcoinExchange tmp;

	try
	{
		tmp.read_database("data.csv");
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
}

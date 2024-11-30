#include <iostream>
#include <string>
#include "PMergeMe.hpp"

int	main(int argc, char **argv)
{
	PMergeMe	merge;

	if (argc == 1)
	{
		std::cout << "Not enough arguments!" << std::endl;
		return (1);
	}
	try
	{
		merge.get_input(++argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	merge.sort();
}

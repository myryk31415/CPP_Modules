#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "usage: ./convert <arg>" << std::endl;
		return (1);
	}
	argv++;
	while (*argv)
	{
		ScalarConverter::convert(*argv);
		argv++;
		if (*argv)
			std::cout << "========================================" << std::endl;
	}
	return (0);
}

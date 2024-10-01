#include "RPN.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "Please provide arguments" << std::endl;
	argv++;
	while (*argv)
	{
		if (RPN::validate(*argv))
			std::cout << "error" << std::endl;
		else
		{
			RPN test;
			try
			{
				std::cout << test.calculate(*argv) << std::endl;
			}
			catch (std::exception &e)
			{
				std::cout << "Error: " << e.what() << std::endl;
			}
		}
		argv++;
	}
	return (0);
}

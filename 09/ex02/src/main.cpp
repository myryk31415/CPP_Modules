#include <iostream>
#include <string>

bool	check_number(char *arg)
{
	if (*arg == '+')
		arg++;
	if (!*arg)
		return (1);
	while (*arg)
	{
		if (std::string("0123456789").find(*arg) == std::string::npos)
			return (1);
		arg++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Not enough arguments!" << std::endl;
		return (1);
	}
	while (--argc)
	{
		if (check_number(argv[argc]))
		{
			std::cout << "Incorrect arguments!" << std::endl;
		}
	}

}

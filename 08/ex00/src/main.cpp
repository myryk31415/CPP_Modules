#include "easyfind.hpp"
#include <vector>
#include <deque>

int	main(void)
{
	std::vector<int> vec_int({1, 7, 2});

	try
	{
		easyfind(vec_int, 4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << *easyfind(vec_int, 2) << std::endl;
}

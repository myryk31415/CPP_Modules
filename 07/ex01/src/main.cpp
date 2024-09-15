#include <iostream>
#include "iter.hpp"

void	print(int &i)
{
	std::cout << i << " ";
}

void	print(char &c)
{
	std::cout << c << " ";
}

void	add_two(int &i)
{
	i += 2;
}

void	make_upper(char &c)
{
	c = toupper(c);
}

int main( void ) {
	int arr_int[] = {1, 7, 2};

	iter(arr_int, 3, print);
	std::cout << std::endl;
	iter(arr_int, 3, add_two);
	iter(arr_int, 3, print);
	std::cout << std::endl;

	std::cout << std::endl;
	
	char arr_char[] = {'a', 'V', '%', 'y', '1', 'b'};

	iter(arr_char, 6, print);
	std::cout << std::endl;
	iter(arr_char, 6, make_upper);
	iter(arr_char, 6, print);
	std::cout << std::endl;
	return 0;
}

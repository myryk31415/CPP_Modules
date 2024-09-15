#include <iostream>
#include "Array.hpp"

int main( void ) {
	Array<int> test;

	std::cout << "size: " << test.size() << std::endl;
	try
	{
		std::cout << test[0];
	}
	catch (std::exception &e)
	{
		std::cout << "catched" << std::endl;
		e.what();
	}
	std::cout << std::endl;

	Array<int> test_tmp = Array<int>(4);
	test_tmp[2] = 123;

	test = Array<int>(test_tmp);
	test_tmp[2] = 32;
	std::cout << "size: " << test.size() << std::endl;
	std::cout << "value test: " << test[2] << std::endl;
	std::cout << "value test_tmp: " << test_tmp[2] << std::endl;

	return 0;
}

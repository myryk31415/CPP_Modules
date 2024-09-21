#include "BitcoinExchange.hpp"

// Default constructor
BitcoinExchange::BitcoinExchange(void)
{
	// std::cout << "BitcoinExchange Default constructor called" << std::endl;
	return ;
}

// Input constructor
BitcoinExchange::BitcoinExchange()
{
	// std::cout << "BitcoinExchange Input constructor called" << std::endl;
	return ;
}

// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
	// std::cout << "BitcoinExchange Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	// std::cout << "BitcoinExchange Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
BitcoinExchange::~BitcoinExchange(void)
{
	// std::cout << "BitcoinExchange Destructor called" << std::endl;
	return ;
}


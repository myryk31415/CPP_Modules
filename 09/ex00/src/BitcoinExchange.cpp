#include "BitcoinExchange.hpp"

// Default constructor
BitcoinExchange::BitcoinExchange(void)
{
	// std::cout << "BitcoinExchange Default constructor called" << std::endl;
	return ;
}

// Input constructor
BitcoinExchange::BitcoinExchange(std::string path)
{
	// std::cout << "BitcoinExchange Input constructor called" << std::endl;
	read_database(path);
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

void	BitcoinExchange::read_database(std::string path)
{
	std::ifstream	file (path);
	std::string		line;

	if (!file.is_open())
		throw (std::runtime_error("Could not open file\n"));
	getline(file,line);
	while (getline(file,line))
	{
		size_t comma = line.find_first_of(',');

		if (comma == std::string::npos)
			throw (std::runtime_error("Incorrect database format"));

		std::string date = line.substr(0, comma);
		std::string value = line.substr(comma + 1);

		// std::cout << date << std::endl;
		if (validate_date(date))
			std::cout << "INCORRECT: " << std::endl;
		std::cout << "date: " << date << ", value: " << value << std::endl;
	}
}

int	BitcoinExchange::validate_date(std::string date)
{
	struct tm tm;

	if (!strptime(date.c_str(), "%Y-%m-%d", &tm))
		return 1;
	return 0;

	// std::string	year;
	// std::string	month;
	// std::string	day;
	// size_t		sep1;
	// size_t		sep2;

	// sep1 = date.find_first_of('-');
	// sep2 = date.find_last_of('-');

	// if (sep1 == std::string::npos || sep1 == sep2)
	// 	return 1;
	// year = date.substr(0, sep1);
	// month = date.substr(sep1 + 1, sep2);
	// day = date.substr(sep2 +1);
	// try
	// {
	// 	int	year_int = std::atoi(year.c_str());
	// 	int month_int = std::atoi(month.c_str());
	// 	int day_int = std::atoi(day.c_str());

	// 	if (month_int > 12)
	// 		return ()
	// }
	// catch(const std::exception& e)
	// {
	// 	return 1;
	// }
	// return 0;
}

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
	(void) path;
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
		if (validate_date(date))
			throw (std::runtime_error("Incorrect database format"));
		if (validate_number(value))
			throw (std::runtime_error("Incorrect database format"));
		price_history[date] = stod(value);
	}
}

void	BitcoinExchange::read_input(std::string path)
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
		if (validate_date(date))
			throw (std::runtime_error("Incorrect database format"));
		if (validate_number(value))
			throw (std::runtime_error("Incorrect database format"));
		price_history[date] = stod(value);
	}
}

int	BitcoinExchange::validate_date(std::string date)
{
	std::string	year;
	std::string	month;
	std::string	day;
	size_t		sep1;
	size_t		sep2;
	int			sep_count;

	sep_count = 0;
	for (char c : date)
	{
		if (c == '-')
			sep_count++;
		if (!std::isdigit(c) && c != '-')
			return 1;
	}
	if (sep_count != 2)
		return 1;
	sep1 = date.find_first_of('-');
	sep2 = date.find_last_of('-');
	year = date.substr(0, sep1);
	month = date.substr(sep1 + 1, sep2);
	day = date.substr(sep2 +1);
	try
	{
		int	year_int = std::atoi(year.c_str());
		int month_int = std::atoi(month.c_str());
		int day_int = std::atoi(day.c_str());

		if (year_int < 0)
			return 1;
		if (month_int > 12 || month_int < 1)
			return 1;
		if (day_int > 31 || day_int < 1)
			return 1;
		if (month_int == 4 || month_int == 6 || month_int == 9 || month_int == 11)
			if (day_int > 30)
				return 1;
		if (month_int == 2 && day_int > 28)
			return 1;
	}
	catch(const std::exception& e)
	{
		return 1;
	}
	return 0;
}

int	BitcoinExchange::validate_number(std::string number)
{
	double	value;
	int		dot_count;

	dot_count = 0;
	for (char c : number)
	{
		if (c == '.')
			dot_count++;
		if (!std::isdigit(c) && c != '.')
			return 1;
	}
	if (dot_count > 1)
		return 1;
	try
	{
		value = std::stod(number);
	}
	catch(const std::exception& e)
	{
		return 1;
	}
	if (value < 0)
		return 1;
	return 0;
}

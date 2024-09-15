#include "ScalarConverter.hpp"

// Default constructor
ScalarConverter::ScalarConverter(void)
{
	// std::cout << "ScalarConverter Default constructor called" << std::endl;
	return ;
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	// std::cout << "ScalarConverter Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	// std::cout << "ScalarConverter Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
	// std::cout << "ScalarConverter Destructor called" << std::endl;
	return ;
}

void	ScalarConverter::convert(std::string arg)
{
	switch (get_type(arg))
	{
		case SPECIAL:
			special_convert(arg);
			break;
		case CHAR:
			char_convert(arg);
			break;
		case INT:
			int_convert(arg);
			break;
		case FLOAT:
			float_convert(arg);
			break;
		case DOUBLE:
			double_convert(arg);
			break;
		// default:
		// 	break;
	}
}

ScalarConverter::type	ScalarConverter::get_type(std::string arg)
{
	if (arg == "nan" || arg == "+inf" || arg == "-inf" ||
		arg == "nanf" || arg == "+inff" || arg == "-inff")
		return (SPECIAL);
	else if (arg.length() == 1 && !isdigit(arg[0]))
		return (CHAR);
	else if (arg.find('f') != std::string::npos)
		return (FLOAT);
	else if (arg.find('.') != std::string::npos)
		return (DOUBLE);
	else
		return (INT);
}

void	ScalarConverter::special_convert(std::string arg)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (arg.find('f') != std::string::npos)
	{
		float number_float = std::stof(arg);
		std::cout << "float: " << number_float << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(number_float) << std::endl;
	}
	else
	{
		double number_double = std::stof(arg);
		std::cout << "float: " << static_cast<float>(number_double) << "f" << std::endl;
		std::cout << "double: " << number_double << std::endl;
	}
}

void	ScalarConverter::char_convert(std::string arg)
{
	char c = arg[0];

	std::cout << "char: " << "'" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	ScalarConverter::int_convert(std::string arg)
{
	int i = std::stoi(arg);

	std::cout << "char: ";
	if (i > 127 || i < 0)
		std::cout << "impossible" << std::endl;
	else if (!isprint(i))
		std::cout << "Non displayable" <<std::endl;
	else
		std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	ScalarConverter::float_convert(std::string arg)
{
	float f = std::stof(arg);

	std::cout << "char: ";
	if (std::truncf(f) != f || f > 127 || f < 0)
		std::cout << "impossible" << std::endl;
	else if (!isprint(f))
		std::cout << "Non displayable" <<std::endl;
	else
		std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: ";
	if (std::truncf(f) != f || f > INT_MAX || f < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(f) << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::double_convert(std::string arg)
{
	double fl = std::stod(arg);

	std::cout << "char: ";
	if (std::truncf(fl) != fl || fl > 127 || fl < 0)
		std::cout << "impossible" << std::endl;
	else if (!isprint(fl))
		std::cout << "Non displayable" <<std::endl;
	else
		std::cout << "'" << static_cast<char>(fl) << "'" << std::endl;
	std::cout << "int: ";
	if (std::truncf(fl) != fl || fl > INT_MAX || fl < INT_MIN)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(fl) << std::endl;
	std::cout << "float: ";
	if (fl > std::numeric_limits<float>::max() || fl < std::numeric_limits<float>::min())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<float>(fl) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(fl) << std::endl;
}

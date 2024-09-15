#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
# include <limits>
# include <cmath>
# include <climits>

class ScalarConverter
{
	public:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();

		static void	convert(std::string arg);

	private:
		enum type {
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			SPECIAL,
		};
		static type	get_type(std::string arg);
		static void	special_convert(std::string arg);
		static void	char_convert(std::string arg);
		static void	int_convert(std::string arg);
		static void	float_convert(std::string arg);
		static void	double_convert(std::string arg);
};

#endif


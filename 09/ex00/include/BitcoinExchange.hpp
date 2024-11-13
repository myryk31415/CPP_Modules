#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <fstream>
# include <map>
# include <ctime>

class BitcoinExchange
{
	private:
		std::map<std::string, double> price_history;
	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string path);
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange &operator=(const BitcoinExchange &other);
		~BitcoinExchange();

		void	read_database(std::string path);
		void	read_input(std::string path);
		int		validate_date(std::string date);
		int		validate_number(std::string value);
};

#endif


#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int		_len;
		std::vector<int>	_data;
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& other);
		Span &operator=(const Span &other);
		~Span();

		unsigned int get_len();

		void	addNumber(int nb);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void);
		int		longestSpan(void);

		class SpanFullException : public std::exception
		{
			const char *what(void) const throw();
		};

		class NotEnoughElements : public std::exception
		{
			const char *what(void) const throw();
		};
};

#endif


#include "Span.hpp"

// Default constructor
Span::Span(void)
{
	// std::cout << "Span Default constructor called" << std::endl;
	_len = 0;
	return ;
}

// Input constructor
Span::Span(unsigned int N)
{
	// std::cout << "Span Input constructor called" << std::endl;
	_len = N;
	_data.reserve(N);
	return ;
}

// Copy constructor
Span::Span(const Span &other)
{
	// std::cout << "Span Copy constructor called" << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
Span &Span::operator=(const Span &other)
{
	// std::cout << "Span Assignment operator called" << std::endl;
	this->_data = other._data;
	this->_len = other.get_len();
	return (*this);
}

// Destructor
Span::~Span(void)
{
	// std::cout << "Span Destructor called" << std::endl;
	return ;
}

unsigned int Span::get_len(void) const
{
	return (_len);
}

void	Span::addNumber(int nb)
{
	if (_data.size() >= _len)
		throw(SpanFullException());
	_data.emplace_back(nb);
}

void	Span::addNumber(std::vector<int>::iterator begin,
			std::vector<int>::iterator end)
{
	if (std::distance(begin, end) > static_cast<long int>(_len - _data.size()))
		throw(SpanFullException());
	_data.insert(_data.end(), begin, end);
}

int	Span::shortestSpan(void)
{
	int	span;

	if (_data.size() <= 1)
		throw(NotEnoughElements());
	std::sort(_data.begin(), _data.end());
	span = _data[1] - _data[0];
	for (size_t i = 1; i < _data.size(); i++)
	{
		int	tmp = _data[i] - _data[i - 1];
		if (tmp < span)
			span = tmp;
	}
	return (span);
}

int	Span::longestSpan(void)
{
	if (_data.size() <= 1)
		throw(NotEnoughElements());
	std::sort(_data.begin(), _data.end());
	return (_data[_data.size() - 1] - _data[0]);
}

const char *Span::SpanFullException::what(void) const throw()
{
	return ("The span is full!");
}

const char *Span::NotEnoughElements::what(void) const throw()
{
	return ("Not enough elements, can't find a span!");
}

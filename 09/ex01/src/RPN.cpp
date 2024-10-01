#include "RPN.hpp"

// Default constructor
RPN::RPN(void)
{
	// std::cout << "RPN Default constructor called" << std::endl;
	return ;
}

// Copy constructor
RPN::RPN(const RPN &other)
{
	// std::cout << "RPN Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
RPN &RPN::operator=(const RPN &other)
{
	// std::cout << "RPN Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
RPN::~RPN(void)
{
	// std::cout << "RPN Destructor called" << std::endl;
	return ;
}

bool	RPN::validate(std::string arg)
{
	size_t				i;
	const std::string	valid_chars = "0123456789+-/*";

	i = 0;
	while (arg[i])
	{
		if (arg[i] != ' ')
		{
			if (arg[i + 1] && arg[i + 1] != ' ')
				return (1);
			if (valid_chars.find(arg[i]) == std::string::npos)
				return (1);
		}
		i++;
	}
	return (0);
}

int	RPN::calculate(std::string arg)
{
	for(std::string::iterator it = arg.begin(); it != arg.end(); it++)
	{
		switch (*it)
		{
			case (' '):
				break;
			case ('+'):
				operate(add);
				break;
			case ('-'):
				operate(substract);
				break;
			case ('/'):
				operate(divide);
				break;
			case ('*'):
				operate(multiply);
				break;
			default:
				_stack.push(*it - '0');
		}
	}
	if (_stack.size() > 1)
		throw (NotEnoughArgumentsException());
	return (_stack.top());
}

void	RPN::operate(int (*operation)(int, int))
{
	int	tmp;

	if (_stack.size() < 2)
		throw (StackEmptyException());
	tmp = _stack.top();
	_stack.pop();
	_stack.top() = operation(_stack.top(), tmp);
}

int	RPN::add(int a, int b)
{
	return (a + b);
}

int	RPN::substract(int a, int b)
{
	return (a - b);
}

int	RPN::divide(int a, int b)
{
	if (b == 0)
		throw(DivideByZeroException());
	return (a / b);
}

int	RPN::multiply(int a, int b)
{
	return (a * b);
}

const char *RPN::DivideByZeroException::what() const throw()
{
	return ("Tried to divide by zero!");
}

const char *RPN::StackEmptyException::what() const throw()
{
	return ("Not enough operands for operation!");
}

const char *RPN::NotEnoughArgumentsException::what() const throw()
{
	return ("More then one operand left!");
}

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>

class RPN
{
	private:
		std::stack<int> _stack;
		void			operate(int (*operation)(int, int));
		static int		add(int a, int b);
		static int		substract(int a, int b);
		static int		divide(int a, int b);
		static int		multiply(int a, int b);

	public:
		RPN(void);
		RPN(const RPN& other);
		RPN &operator=(const RPN &other);
		~RPN();
		static bool	validate(std::string arg);
		int	calculate(std::string arg);

	class DivideByZeroException : public std::exception
	{
		const char *what() const throw();
	};

	class StackEmptyException : public std::exception
	{
		const char *what() const throw();
	};

	class NotEnoughArgumentsException : public std::exception
	{
		const char *what() const throw();
	};
};

#endif


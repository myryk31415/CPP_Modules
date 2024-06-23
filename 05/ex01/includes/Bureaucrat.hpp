#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& other);
		Bureaucrat &operator=(const Bureaucrat &other);
		~Bureaucrat();

		std::string get_name(void) const;
		int get_grade(void) const;
		void	increment(void);
		void	decrement(void);
};

std::ostream& operator << (std::ostream &o, Bureaucrat const &ref);
#endif


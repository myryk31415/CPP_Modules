#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
		virtual void		_execute(void) const = 0;
	public:
		AForm(void);
		AForm(std::string name, std::string target, int grade_sign, int grade_exec);
		AForm(const AForm& other);
		AForm &operator=(const AForm &other);
		virtual ~AForm();

		void		beSigned(Bureaucrat crat);
		void		execute(Bureaucrat const & executor);

		std::string	get_name() const;
		std::string get_target() const;
		bool		is_signed() const;
		int			get_grade_sign() const;
		int			get_grade_exec() const;

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw();
		};

		class NotSignedException : public std::exception
		{
			const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream &o, AForm const &ref);
#endif


#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_sign;
		const int			_grade_exec;
	public:
		Form(void);
		Form(const Form& other);
		Form &operator=(const Form &other);
		~Form();
		std::string	get_name();
		bool		is_signed();
		int			get_grade_sign();
		int			get_grade_exec();
		void		be_signed(Bureaucrat bureaucrat);
		
};

#endif


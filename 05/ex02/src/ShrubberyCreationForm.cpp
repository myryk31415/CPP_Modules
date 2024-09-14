#include "ShrubberyCreationForm.hpp"

// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", "default_target", 145, 137)
{
	// std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	return;
}

// Input constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137)
{
	// std::cout << "ShrubberyCreationForm Input constructor called" << std::endl;
	return;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
	// std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
	return;
}

// Assignment operator overload
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	// std::cout << "ShrubberyCreationForm Assignment operator called" << std::endl;
	(void)other;
	return (*this);
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
	return;
}

void	ShrubberyCreationForm::_execute() const
{
	const std::string TREE = "\
		'.,\n\
		'b      *\n\
		'$    #.\n\
		$:   #:\n\
		*#  @):\n\
		:@,@):   ,.**:'\n\
,         :@@*: ..**'\n\
'#o.    .:(@'.@*''\n\
	'bq,..:,@@*'   ,*\n\
	,p$q8,:@)'  .p*'\n\
	'    '@@Pp@@*'\n\
		Y7'.'\n\
		:@):.\n\
		.:@:'.\n\
	.::(@:.\n\n";

	std::ofstream myfile;

	myfile.open((get_target() + "_shrubbery").c_str());
	for (int i = 0; i < 5; i++)
		myfile << TREE;
	myfile.close();
}


#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria& other);
		AMateria &operator=(const AMateria &other);
		~AMateria();
};

#endif


#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& other);
		Cure &operator=(const Cure &other);
		~Cure();
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif


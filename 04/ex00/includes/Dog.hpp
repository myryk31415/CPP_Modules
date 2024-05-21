#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>

class Dog
{
	public:
		Dog(void);
		Dog(const Dog& other);
		Dog &operator=(const Dog &other);
		~Dog();
};

#endif


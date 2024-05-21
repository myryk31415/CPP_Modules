#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>

class Cat
{
	public:
		Cat(void);
		Cat(const Cat& other);
		Cat &operator=(const Cat &other);
		~Cat();
};

#endif


#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	switch (rand() % 3)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (new Base);
}

void identify(Base* p)
{
	std::cout << "Class: ";

	A* a = dynamic_cast<A*>(p);
	if (a)
		std::cout << "A";

	B* b = dynamic_cast<B*>(p);
	if (b)
		std::cout << "B";

	C* c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C";

	std::cout << std::endl;
}

void identify(Base& p)
{
	std::cout << "Class: ";

	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(const std::bad_cast& e) {}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(const std::bad_cast& e) {}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(const std::bad_cast& e) {}

	std::cout << std::endl;
}

int	main(void)
{
	std::srand(std::time(NULL));

	for (size_t i = 5; i > 0; i--)
	{
		Base *random = generate();
		identify(random);
		identify(&*random);
		delete random;
		if (i > 1)
			std::cout << "====================" << std::endl;
	}
	return (0);
}

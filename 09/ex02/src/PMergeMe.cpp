#include "PMergeMe.hpp"

// Default constructor
PMergeMe::PMergeMe(void)
{
	// std::cout << "PMergeMe Default constructor called" << std::endl;
	return ;
}

// Input constructor
PMergeMe::PMergeMe()
{
	// std::cout << "PMergeMe Input constructor called" << std::endl;
	return ;
}

// Copy constructor
PMergeMe::PMergeMe(const PMergeMe &other)
{
	// std::cout << "PMergeMe Copy constructor called" << std::endl;
	(void) other;
	return ;
}

// Assignment operator overload
PMergeMe &PMergeMe::operator=(const PMergeMe &other)
{
	// std::cout << "PMergeMe Assignment operator called" << std::endl;
	(void) other;
	return (*this);
}

// Destructor
PMergeMe::~PMergeMe(void)
{
	// std::cout << "PMergeMe Destructor called" << std::endl;
	return ;
}

PMergeMe::Pair::Pair(void)
{
	// std::cout << "Pair Default constructor called" << std::endl;
	this->first_int = 0;
	this->second_int = 0;
	this->last = false;
	this->single = false;
	this->first_pair = new Pair();
	this->second_pair = new Pair();
	return ;
}

PMergeMe::Pair::Pair(int first, int second)
{
	// std::cout << "Pair Input constructor called" << std::endl;
	this->first_int = first;
	this->second_int = second;
	this->last = true;
	this->single = false;
	this->first_pair = nullptr;
	this->second_pair = nullptr;
	return ;
}

PMergeMe::Pair::Pair(const Pair &other)
{
	// std::cout << "Pair Copy constructor called" << std::endl;
	this->first_int = other.first_int;
	this->second_int = other.second_int;
	this->last = other.last;
	this->single = other.single;
	this->first_pair = other.first_pair;
	this->second_pair = other.second_pair;
	return ;
}

PMergeMe::Pair &PMergeMe::Pair::operator=(const Pair &other)
{
	// std::cout << "Pair Assignment operator called" << std::endl;
	this->first_int = other.first_int;
	this->second_int = other.second_int;
	this->last = other.last;
	this->single = other.single;
	this->first_pair = other.first_pair;
	this->second_pair = other.second_pair;
	return (*this);
}

PMergeMe::Pair::~Pair(void)
{
	// std::cout << "Pair Destructor called" << std::endl;
	delete this->first_pair;
	delete this->second_pair;
	return ;
}

int	PMergeMe::Pair::get_first_int(void) const
{
	if (this->last)
		return (this->first_int);
	return (this->first_pair->get_first_int());
}

int	PMergeMe::Pair::get_second_int(void) const
{
	return (this->second_int);
}

PMergeMe::Pair	*PMergeMe::Pair::get_first_pair(void)
{
	Pair	*tmp;

	tmp = this->first_pair;
	this->first_pair = nullptr;
	return (tmp);
}

PMergeMe::Pair	*PMergeMe::Pair::get_second_pair(void)
{
	Pair	*tmp;

	tmp = this->second_pair;
	this->second_pair = nullptr;
	return (tmp);
}

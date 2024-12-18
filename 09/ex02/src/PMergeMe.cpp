#include "PMergeMe.hpp"

// Default constructor
PMergeMe::PMergeMe(void)
{
	// std::cout << "PMergeMe Default constructor called" << std::endl;
	return ;
}

// Copy constructor
PMergeMe::PMergeMe(const PMergeMe &other)
{
	// std::cout << "PMergeMe Copy constructor called" << std::endl;
	*this = other;
	return ;
}

// Assignment operator overload
PMergeMe &PMergeMe::operator=(const PMergeMe &other)
{
	// std::cout << "PMergeMe Assignment operator called" << std::endl;
	this->vector = other.vector;
	this->deque = other.deque;
	return (*this);
}

// Destructor
PMergeMe::~PMergeMe(void)
{
	// std::cout << "PMergeMe Destructor called" << std::endl;
	return ;
}

void	PMergeMe::get_input(char **argv)
{
	std::unordered_set<int>	duplicate_check;

	while (*argv)
	{
		int	tmp = validate_number(*argv);
		if (duplicate_check.find(tmp) != duplicate_check.end())
			throw(std::runtime_error("Duplicate number!"));
		duplicate_check.insert(tmp);
		vector.push_back(tmp);
		deque.push_back(tmp);
		argv++;
	}
}

int		PMergeMe::validate_number(char *arg)
{
	char *tmp = arg;

	if (arg[0] == '-' || arg[0] == '+')
		arg++;
	while (*arg)
	{
		if (!std::isdigit(*arg))
			throw(std::runtime_error("Not a number!"));
		arg++;
	}
	int ret = std::stoi(tmp);
	if (ret <= 0)
		throw(std::runtime_error("Not a positive number!"));
	return (ret);
}

void	PMergeMe::sort(void)
{
	std::cout << "Before:\t";
	for (int number : vector)
		std::cout << number << " ";
	std::cout << std::endl;

	auto vector_time = merge_insertion<std::vector<int>, std::vector<std::pair<int, int>>>(vector);
	auto deque_time = merge_insertion<std::deque<int>, std::deque<std::pair<int, int>>>(deque);

	std::cout << "After:\t";
	for (int number : vector)
		std::cout << number << " ";
	std::cout << std::endl;

	std::cout << "Time to process a range of " << vector.size() << \
	" elements with std::vector : " << vector_time.count() << " us" << std::endl;
	std::cout << "Time to process a range of " << deque.size() << \
	" elements with std::deque : " << deque_time.count() << " us" << std::endl;
}

size_t	PMergeMe::get_jakobs_diff(int n)
{
	return (((1 << n) + (n % 2 ? 1 : -1)) * 2 / 3);
}

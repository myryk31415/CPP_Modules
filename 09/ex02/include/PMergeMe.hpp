#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>

class PMergeMe
{
	public:
		PMergeMe(void);
		PMergeMe();
		PMergeMe(const PMergeMe& other);
		PMergeMe &operator=(const PMergeMe &other);
		~PMergeMe();
	private:
		std::vector<std::pair<int, int>	pair_vector;
		std::deque<std::pair<int, int>	pair_deque;
};

#endif


#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <unordered_set>
# include <chrono>

class PMergeMe
{
	public:
		PMergeMe(void);
		PMergeMe(const PMergeMe& other);
		PMergeMe &operator=(const PMergeMe &other);
		~PMergeMe();

		void	get_input(char **argv);
		int		validate_number(char *arg);
		void	sort(void);
	private:
		std::vector<int>	vector;
		std::deque<int>		deque;

		template <typename T>
		auto	merge_insertion(T &container)
		{
			auto start = std::chrono::high_resolution_clock::now();
			T<pair<int, int>>	pairs;
			int					oddoneout;

			if (container.size() % 2)
			{
				oddoneout = container.back();
				container.pop_back();
			}
			pairs = create_pairs(container);
			for (auto &pair : pairs)
			{
				if (pair.first > pair.second)
					std::swap(pair.first, pair.second);
				std::cout << pair.first << " " << pair.second << std::endl;
			}
			container = container;
			return (std::chrono::high_resolution_clock::now() - start);
		}

		template <typename T>
		auto	create_pairs(T &container)
		{
			T<std::pair<int, int>>	pairs;

			for (int i = 1; i < container.size(); i += 2)
				pairs.push_back(std::make_pair(container[i - 1], container[i]));
			return (pairs);
		}
};

#endif


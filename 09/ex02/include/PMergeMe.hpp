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
			//todo!();
			(void)container;
			return (std::chrono::high_resolution_clock::now() - start);
		}
};

#endif


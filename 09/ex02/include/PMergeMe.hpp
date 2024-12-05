#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <unordered_set>
# include <chrono>
// #include <type_traits>
// #include <utility>
// #include <algorithm>

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


		template <typename T, typename P>
		auto	merge_insertion(T &container)
		{
			int		oddoneout;
			P		pairs;
			auto	start = std::chrono::high_resolution_clock::now();

			if (container.size() % 2)
			{
				oddoneout = container.back();
				container.pop_back();
			}
			create_pairs(container, pairs);
			for (auto &pair : pairs)
				if (pair.first > pair.second)
					std::swap(pair.first, pair.second);
			merge_sort(pairs);
			ford_johnson(container, pairs);
			(void)oddoneout;
			return (std::chrono::high_resolution_clock::now() - start);
		}

		template <typename T, typename P>
		void	ford_johnson(T &container, P &pairs)
		{
			T	sorted;
			int	jakobsthal = 0;

			while(!pairs.empty())
			{
				jakobsthal = get_next_jakobsth(jakobsthal);
			}
			container = sorted;
		}

		template <typename T>
		void	binary_insertion(T &container, int element, size_t start, size_t end)
		{
			if (start = end)
			{
				if (container[start] > element)
					container.insert(start, element);
				else
					container.insert(start + 1, element);
				return;
			}
			size_t middle = (start + end) / 2;
			if (container[middle] > element)
				binary_insertion(container, element, start, middle - 1);
			else
				binary_insertion(container, element, middle + 1, end);
		}

		template <typename P>
		void	merge_sort(P &pairs)
		{
			if (pairs.size() == 1)
				return ;

			int middle = pairs.size() / 2;
			P first_half = P(pairs.begin(), pairs.begin() + middle);
			P second_half = P(pairs.begin() + middle, pairs.end());

			merge_sort(first_half);
			merge_sort(second_half);

			P tmp;
			auto it_first = first_half.begin();
			auto it_second = second_half.begin();
			while (it_first != first_half.end() && it_second != second_half.end())
			{
				if (it_first->first < it_second->first)
				{
					tmp.push_back(*it_first);
					it_first++;
				}
				else
				{
					tmp.push_back(*it_second);
					it_second++;
				}
			}
			while (it_first != first_half.end())
			{
				tmp.push_back(*it_first);
				it_first++;
			}
			while (it_second != second_half.end())
			{
				tmp.push_back(*it_second);
				it_second++;
			}
			pairs = tmp;
		}

		template <typename P, typename P>
		void	create_pairs(P &container, P &pairs)
		{
			for (size_t i = 1; i < container.size(); i += 2)
				pairs.push_back(std::make_pair(container[i - 1], container[i]));
		}
};

#endif


#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <vector>
# include <deque>
# include <unordered_set>
# include <chrono>
#include <algorithm>

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
		size_t	get_jakobs_diff(int n);
		std::vector<int>	vector;
		std::deque<int>		deque;


		template <typename T, typename P>
		auto	merge_insertion(T &container)
		{
			int		oddoneout;
			P		pairs;
			auto	start = std::chrono::high_resolution_clock::now();
			bool	uneven = container.size() % 2;

			if (uneven)
			{
				oddoneout = container.back();
				container.pop_back();
			}
			create_pairs(container, pairs);
			for (auto &pair : pairs)
				if (pair.first < pair.second)
					std::swap(pair.first, pair.second);
			merge_sort(pairs);
			// for (&pair : pairs)
			// 	std::cout << "first: " << pair.first << ", second: " << pair.second << std::endl;
			ford_johnson(container, pairs);
			if (uneven)
				binary_insert(container, oddoneout, 0, container.size() - 1);
			return (std::chrono::high_resolution_clock::now() - start);
		}

		template <typename T, typename P>
		void	ford_johnson(T &container, P &pairs)
		{
			T	sorted;
			int	i = 1;

			if (!pairs.empty())
				insert_group(sorted, pairs, 1);
			while(!pairs.empty())
				insert_group(sorted, pairs, get_jakobs_diff(i++));
			container = sorted;
		}

		template <typename T, typename P>
		void	insert_group(T &sorted, P &pairs, size_t jakobsdiff)
		{
			size_t i = 0;

			if (jakobsdiff > pairs.size())
				jakobsdiff = pairs.size();
			while (i < jakobsdiff)
			{
				sorted.push_back(pairs[i].first);
				i++;
			}
			i = sorted.size() - 1;
			while (jakobsdiff--)
			{
				binary_insert(sorted, pairs[jakobsdiff].second, 0, i);
				pairs.erase(pairs.begin() + jakobsdiff);
			}
		}

		template <typename T>
		void	binary_insert(T &container, int element, size_t start, size_t end)
		{
			if (container.empty())
			{
				container.insert(container.begin(), element);
				return;
			}
			if (start == end)
			{
				if (container[start] > element)
					container.insert(container.begin() + start, element);
				else
					container.insert(container.begin() + start + 1, element);
				return;
			}
			size_t middle = (start + end) / 2;
			if (container[middle] > element)
			{
				binary_insert(container, element, start, middle > 0 ? middle - 1 : 0);
			}
			else
				binary_insert(container, element, middle < end ? middle + 1 : end, end);
		}

		template <typename P>
		void	merge_sort(P &pairs)
		{
			if (pairs.size() <= 1)
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

		template <typename T, typename P>
		void	create_pairs(T &container, P &pairs)
		{
			for (size_t i = 1; i < container.size(); i += 2)
				pairs.push_back(std::make_pair(container[i - 1], container[i]));
		}
};

#endif


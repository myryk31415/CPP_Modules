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
		class Pair
		{
			public:
				Pair(void);
				Pair(int first, int second);
				Pair(const Pair& other);
				Pair &operator=(const Pair &other);
				~Pair(void);

				int		get_first_int(void) const;
				int		get_second_int(void) const;
				Pair	*get_first_pair(void);
				Pair	*get_second_pair(void);
			private:
				bool	last;
				bool	single;
				Pair	*first_pair;
				Pair	*second_pair;
				int		first_int;
				int		second_int;
		};
		std::vector<Pair>	pair_list;
};

#endif


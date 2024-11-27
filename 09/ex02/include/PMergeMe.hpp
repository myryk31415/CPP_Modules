#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>

template <typename type>
class PMergeMe
{
	private:
		typedef std::vector<std::pair<type::value_type, type::value_type>> type_arr;
	public:
		PMergeMe(void);
		PMergeMe();
		PMergeMe(const PMergeMe& other);
		PMergeMe &operator=(const PMergeMe &other);
		~PMergeMe();
};

#endif


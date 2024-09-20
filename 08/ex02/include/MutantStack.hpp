#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <iterator>

template <typename T> class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {};
		MutantStack(const MutantStack& other) : std::stack<T>(other) {};
		MutantStack &operator=(const MutantStack &other)
		{
			std::stack<T>::operator=(other);
			return (*this);
		};
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin()
		{
			return (std::begin(std::stack<T>::c));
		}

		iterator	end()
		{
			return (std::end(std::stack<T>::c));
		}

		reverse_iterator	rbegin()
		{
			return (std::deque<T>::rbegin(std::stack<T>::c));
		}

		reverse_iterator	rend()
		{
			return (std::deque<T>::rend(std::stack<T>::c));
		}

		const_iterator	cbegin()
		{
			return (std::deque<T>::cbegin(std::stack<T>::c));
		}

		const_iterator	cend()
		{
			return (std::deque<T>::cend(std::stack<T>::c));
		}

		const_reverse_iterator	crbegin()
		{
			return (std::deque<T>::crbegin(std::stack<T>::c));
		}

		const_reverse_iterator	crend()
		{
			return (std::deque<T>::crend(std::stack<T>::c));
		}
};

#endif


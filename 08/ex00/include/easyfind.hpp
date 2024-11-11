#pragma once
# include <iostream>
# include <algorithm>

class NotFoundException : public std::exception
{
	public:
		const char	*what(void) const throw()
		{
			return ("The value was not found in the container");
		}
};

template <typename T> typename T::iterator easyfind(T &haystack, int needle)
{
	typename T::iterator result;

	result = std::find(haystack.begin(), haystack.end(), needle);
	if (result == haystack.end())
		throw(NotFoundException());
	return (result);
}

#if !defined(ITER_HPP)
#define ITER_HPP

template <typename T> void iter(T arr[], size_t len, void (*fn)(T &))
{
	if (!arr || !fn)
		return;
	for (size_t i = 0; i < len; i++)
		fn(arr[i]);
}

#endif // ITER_HPP

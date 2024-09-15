#if !defined(ARRAY_HPP)
#define ARRAY_HPP

template <typename T> class Array
{
private:
	size_t	_size;
	T		*_arr;
public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array& operator=(const Array &other);
	~Array();

	T &operator[](size_t element) const;

	size_t size() const;
};

template <typename T> Array<T>::Array()
{
	_size = 0;
	_arr = new T[0];
}

template <typename T> Array<T>::Array(unsigned int n)
{
	_size = n;
	_arr = new T[n];
	for (size_t i = 0; i < _size; i++)
		_arr[i] = T();
}

template <typename T> Array<T>::Array(const Array<T> &other)
{
	_size = other.size();
	_arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_arr[i] = other[i];
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T> &other)
{
	_size = other.size();
	delete[] _arr;
	_arr = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_arr[i] = other[i];
	return (*this);
}

template <typename T> Array<T>::~Array()
{
	delete[] _arr;
}

template <typename T> T& Array<T>::operator[](size_t element) const
{
	if (element >= size())
		throw (std::exception());
	return (_arr[element]);
}

template <typename T> size_t Array<T>::size() const
{
	return(_size);
}
#endif // ARRAY_HPP

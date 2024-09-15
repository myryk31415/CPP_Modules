#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <iostream>
# include <cstdint>
# include "DataStruct.hpp"

class Serializer
{
	public:
		Serializer(void);
		Serializer(const Serializer& other);
		Serializer &operator=(const Serializer &other);
		~Serializer();

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif


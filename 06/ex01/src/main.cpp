#include <cstdint>
#include "Serializer.hpp"
#include "DataStruct.hpp"

int	main(void)
{
	Data *data = new Data;
	data->boolean = true;
	data->number = 132;

	uintptr_t	serialized = Serializer::serialize(data);
	Data		*deserialized = Serializer::deserialize(serialized);

	std::cout << "address data:		" << data << std::endl;
	std::cout << "value serialized:	" << serialized << std::endl;
	std::cout << "address deserialized:	" << deserialized << std::endl;
	std::cout << std::endl;
	std::cout << "boolean:	" << deserialized->boolean << std::endl;
	std::cout << "number:		" << deserialized->number << std::endl;
	return (0);
}

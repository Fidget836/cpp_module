#include "Serializer.class.hpp"
#include <stdlib.h>

std::ostream &operator<<(std::ostream &o, Data &source)
{
	o << "N : " << source.n << " STR : " << source.str << std::endl;
	return (o);
}

int	main()
{
	Data data;

	data.n = 8;
	data.str = "bonjour !";
	std::cout << data << std::endl;
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "RAW : " << raw << std::endl;
	Data *newData = Serializer::deserialize(raw);
	std::cout << data << std::endl;
}

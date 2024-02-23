#ifndef SERIALIZER_CLASS_HPP
#define SERIALIZER_CLASS_HPP

#include <cstdint>
#include <iostream>

typedef struct s_data
{
	int n;
	std::string str;
}	Data;

class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &src);
		Serializer &operator=(const Serializer &src);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif

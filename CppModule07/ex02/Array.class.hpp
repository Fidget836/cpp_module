#pragma once
#include <iostream>

template <typename T>

class Array
{
	private:
		T* _tab;
		unsigned int _size;

	public:
		Array(void) : _tab(new T()), _size(0) {};
		Array(unsigned int n): _tab(new T[n]), _size(n) {};
		Array(const Array& rhs) : _tab(new T[rhs.size()]), _size(rhs.size()){
			for (unsigned int i(0); i < _size; i++)
			{
				_tab[i] = rhs._tab[i];
			}
		};
		~Array() { delete (_tab); }

		T& operator[]( unsigned int i ) const {
        if ( i >= _size )
            throw OutOfBoundsException();
        return _tab[i];
    	}

		class OutOfBoundsException : public std::exception {
        public:
            virtual const char* what() const throw() { return "Index is out of bounds";}
    };
};

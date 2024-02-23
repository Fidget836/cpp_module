#pragma once

class Base
{
	protected:

	public:
		Base() {};
		Base(const Base &src) {*this = src;};
		Base &operator=(const Base &src) {
			if (this != &src)
			{}
			return (*this);
		};
		virtual ~Base() {};
};

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include <queue>

class Exchange
{
	private:
		std::string _date;
		int _index;
		float _value;
		float _price;
		std::queue<float> _price_temp;
		int _day;
		const char *_Cday;
		int _month;
		const char *_Cmonth;
		int _years;
		const char *_Cyears;
		int _day2;
		const char *_Cday2;
		int _month2;
		const char *_Cmonth2;
		int _years2;
		const char *_Cyears2;

	public:
	/******************Forme Canonique******************/
		Exchange();
		Exchange(const Exchange &src);
		~Exchange() {};
		Exchange &operator=(const Exchange &src);

	/******************Setter / Getter******************/
		std::string getDate(void);
		void		setDate(std::string date);
		float			getValue(void);
		void		setValue(float value);
		int			getIndex(void);
		void		setIndex(int index);

	/******************Methode Programme******************/
		bool	checkData(std::string line);
		void	checkPrice(void);
		void	printValue(void);
};

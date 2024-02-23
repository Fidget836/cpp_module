#include "BitcoinExchange.class.hpp"

Exchange::Exchange()
{}

Exchange::Exchange(const Exchange &src)
{
	*this = src;
}

Exchange &Exchange::operator=(const Exchange &src)
{
	if (this != &src)
	{
		this->_date = src._date;
		this->_value = src._value;
		this->_index = src._index;
	}
	return(*this);
}

std::string Exchange::getDate(void)
{
	return (_date);
}

void	Exchange::setDate(std::string date)
{
	_date = date;
}

float	Exchange::getValue(void)
{
	return (_value);
}

void	Exchange::setValue(float value)
{
	_value = value;
}

int	Exchange::getIndex(void)
{
	return (_index);
}

void	Exchange::setIndex(int index)
{
	_index = index;
}

bool	Exchange::checkData(std::string line)
{
	int i;
	int	y;
	std::string token;
	std::string token2;
	std::string token3;

	i = 0;
	y = 0;
	std::stringstream copyLine(line);
	std::stringstream copyLine2(line);
	if (std::getline(copyLine2, _date, '|'))
	{
		for (size_t i = 0; i < _date.size(); i++)
		{
			if (_date[i] == ' ')
				_date.erase(i);
		}
	}
	if(std::getline(copyLine, token, '-') &&
		std::getline(copyLine, token2, '-') &&
		std::getline(copyLine, token3, '|') && copyLine >> _value)
	{
		_Cyears = token.c_str();
		_years = atoi(_Cyears);
		_Cmonth = token2.c_str();
		_month = atoi(_Cmonth);
		_Cday = token3.c_str();
		_day = atoi(_Cday);
		if (_value < 0 || _value > 1000)
		{
			throw(std::runtime_error("Erreur, la valeur doit etre compris entre 0 et 1000 !"));
			return (false);
		}
		if (_years < 0 || _years > 2023 || _month < 0 ||
			_month > 12 || _day < 0 || _day > 31)
		{
			throw(std::runtime_error("Erreur, la date n'est pas correct !"));
			return (false);
		}
		return (true);
	}
	else
	{
		throw(std::runtime_error("Erreur dans la syntaxe des donnees !"));
		return (false);
	}
	return (false);
}

void	Exchange::checkPrice(void)
{
	std::ifstream intputFile("data.csv");
	std::string token;
	std::string token2;
	std::string token3;

	while(std::getline(intputFile, token, '-') &&
		std::getline(intputFile, token2, '-') &&
		std::getline(intputFile, token3, ',') && intputFile >> _price)
	{
		_Cyears2 = token.c_str();
		_years2 = atoi(_Cyears2);
		_Cmonth2 = token2.c_str();
		_month2 = atoi(_Cmonth2);
		_Cday2 = token3.c_str();
		_day2 = atoi(_Cday2);
		if (_years == _years2)
		{
			if (_month == _month2)
			{
				if (_day - _day2 == 0)
					return ;
				else if (_day - _day2 < 0)
				{
					_price = _price_temp.back();
					return ;
				}
			}
		}
		_price_temp.push(_price);
	}
}

void	Exchange::printValue(void)
{
	std::cout << _date << " => " << _value << " = " << _value * _price << std::endl;
}

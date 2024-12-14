#include "date.h"
#include <iostream>



Date::Date(int d, int m, int y):day(d),month(m),year(y){}


void Date::setDate(int d,int m,int y)
{
	day = d;
	month = m;
	year = y;
}

void Date::getDate()const
{
	std::cout << day << "/" << month << "/" << year;
}

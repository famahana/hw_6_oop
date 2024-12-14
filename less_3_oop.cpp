#include <iostream>
#include "Abonent.h"
#include "date.h"
using namespace std;




int main()
{
	Abonent abonent1 = Abonent::input();
	abonent1.output();
	cout << "Objects: " << Abonent::getCounterObject() << endl;

	return 0;
}
/*class Date
{
	int day;
	int month;
	int year;
public:
	Date(int d, int m, int y)
	{
		day = d;
		month = m;
		year = y;
	}
};


class Cat
{
	Date date;
public:
	Cat(int d, int m, int y) :date{ d,m,y }
	{

	}
};

class Human
{
	char name[20];
	const long long inn;
	Date dateBirthday;
public:
	Human(const char* n, long long my_inn,int d,int m,int y) :inn{ my_inn }, dateBirthday{d,m,y}
	{
		int i = 0;
		while (n[i] != '\0')
		{
			name[i] = n[i];
		}
	}
};


class Math
{
public:
	static double my_pow(int a, int b)
	{
		return pow(a, b);
	}

};


class Point
{
	int x;
	int y;
	static int countObject;
public:
	static int getCountObject()
	{
		return countObject;
	}
	Point(int x1,int y1):x{x1},y{y1}
	{
		countObject++;
	}
	~Point()
	{
		countObject--;
	}
};
int Point::countObject = 0;




int main()
{
	cout << Point::getCountObject() << endl;
	Point p1 = { 3,4 };
	{
		Point p2 = { 13,42 };
		cout << Point::getCountObject() << endl;
	}
	Point p2 = { 13,42 };
	cout << Point::getCountObject() << endl;
	cout << p1.getCountObject() << endl;
	/*cout << Math::my_pow(3, 4) << endl;
	cout << Math::my_pow(2, 0) << endl;
	cout << Math::my_pow(2, 3) << endl;
	return 0;
}
*/
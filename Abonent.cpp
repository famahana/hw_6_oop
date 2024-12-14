#include "Abonent.h"
#include <iostream>
#include <cstring>




Abonent::Abonent(const char* my_pib, int my_phone, int d, int m, int y) :phone{ my_phone }, date{ d,m,y },pib(nullptr)
{
	setPib(my_pib);
	counterObject++;
}

Abonent::~Abonent()
{
	if (pib != nullptr)
	{
		delete[] pib;
		counterObject--;
	}
}

Abonent::Abonent(const Abonent& obj):phone(obj.phone),date(obj.date),pib(nullptr)
{
	setPib(obj.pib);
	++counterObject;
}


char* Abonent::getPib() const
{
	return pib;
}

void Abonent::setPib(const char* my_pib)
{
	if (pib != nullptr)
	{
		delete[]pib;
	}
	if (my_pib != nullptr)
	{
		pib = new char[strlen(my_pib) + 1];
		strcpy_s(pib, strlen(my_pib) + 1, my_pib);
	}
	else
	{
		pib = nullptr;
	}
}

int Abonent::getPhone()const
{
	return phone;
}


Abonent Abonent::input()
{
	const int N = 100;
	char name[N];
	std::cout << "Enter surname and name: ";
	std::cin.getline(name, N-1);
	std::cout << "Enter phone: ";
	int phone;
	std::cin >> phone;
	int d, m, y;
	std::cout << "Enter day:";
	std::cin >> d;
	std::cout << "Enter month:";
	std::cin >> m;
	std::cout << "Enter year:";
	std::cin >> y;
	return Abonent(name,phone,d,m,y);
}

int Abonent::getCounterObject()
{
	return counterObject;
}

void Abonent::output()const
{
	std::cout << "Name:" << getPib() << std::endl;
	std::cout << "Phone:" << getPhone() << std::endl;
	date.getDate();
	std::cout << std::endl;
}
int Abonent::counterObject = 0;












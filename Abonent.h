#pragma once
#include "date.h"
class Abonent
{
private:
	char* pib;
	const int phone;
	Date date;
	static int counterObject;
public:
	Abonent (const char* my_pib,int my_phone,int d, int m,int y);
	~Abonent();
	Abonent(const Abonent& obj);
	char* getPib()const;
	void setPib(const char* my_pib);
	int getPhone()const;
	static Abonent input();
	static int getCounterObject();
	void output()const;
};


#pragma once
class Date
{
	int day;
	int month;
	int year;
public:
	Date(int d, int m, int y);
	void setDate(int d,int m,int y);
    void getDate()const;
};


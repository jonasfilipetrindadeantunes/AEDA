#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
	unsigned int month, day, year;
	unsigned int hour, min;
public:

	Date(unsigned int d, unsigned int m, unsigned int y,unsigned int h, unsigned int min);  //d=day, m=mes,y=ano,h=hora,min=minuto
	//~Date(){}
	Date();
	unsigned int  getDay() const;
	unsigned int  getMonth() const;
	unsigned int getYear() const;
	unsigned int  getHour() const;
	unsigned int  getMinutes() const;

	void setDay(unsigned int d);
	void setMonth(unsigned int m);
	void setYear(unsigned int y);
	void setMin(unsigned int min);
	void setHour(unsigned int h);
	
	
};

#endif
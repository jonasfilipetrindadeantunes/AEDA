#include<iostream>
#include "Date.h"


unsigned int Date::getDay( ) const
{
		return day;
}

unsigned int Date::getMonth( ) const
{
		return month;
	} 


unsigned int Date::getYear( ) const
{
		return year;
	}


unsigned int Date::getHour( ) const
{
		return hour;
	}


unsigned int Date::getMinutes( ) const
{
		return min;
	}



void Date::setDay(unsigned int d)
{
	if (d < 1 || d > 31)
		cerr << "The day is invalid" << endl;
	else
	this->day = d;

}
void Date::setMonth(unsigned int m)
{
	if (m < 1 || m > 12)
		cerr << "The month is invalid" << endl;
	else
	this->month = m;

}
void Date::setYear(unsigned int y)
{
	if (y < 2000 || y > 2050)
		cerr << "The year is invalid" << endl;
	else
	this->year = y;
}

void Date::setHour(unsigned int h)
{
	if (h < 0 || h > 23)
		cerr << "The hour is invalid" << endl;
	else
	this->hour = h;

}
void Date::setMin(unsigned int min)
{
	if (min < 0 || min> 59)
		cerr << "The hour is invalid" << endl;
	else
	this->min = min;
}

Date::Date(unsigned int d,unsigned int m,unsigned int y, unsigned int h, unsigned int minutos)
{
	day=d;
	month=m;
	year=y;
	hour=h;
	min=minutos;
}

Date::Date()
{
	this->day=0;
	this->min=0;
	this->hour=0;
	this->year=0;
	this->month=0;
}
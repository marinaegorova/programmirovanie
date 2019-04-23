#include "stdafx.h"
#include <iostream>
#include "stdio.h"

using namespace std;

class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime);//перезагрузка оператора +
	Time operator-(Time & minusTime);//перезагрузка оператора -
	Time operator*(int mulTimes);//перезагрузка оператора *
	void print();
private:
	long hours;
	int minutes;
};
void Time::setTime(long newHours, int newMinutes)
{
	hours=newHours;
	minutes=newMinutes;
}
long Time::getHours()
{
	
	return(hours);
}
int Time::getMinutes()
{
	return(minutes);
}
Time Time::operator+(Time & plusTime){//реализация перезагрузки оператора +
	using namespace std;
	Time result;
	result.hours=this->hours+plusTime.hours;
	result.minutes=this->minutes+plusTime.minutes;
	
	if (result.minutes>=60)
	{
		result.hours=result.hours+1;
		result.minutes=result.minutes-60;
	}
	
	return result;

}
Time Time::operator-(Time & minusTime){//реализация перезагрузки оператора -
	using namespace std;
	Time result;
	result.hours=this->hours-minusTime.hours;
	result.minutes=this->minutes-minusTime.minutes;
	
	if (result.minutes<=-1)
	{
		result.hours = result.hours - 1;
		result.minutes =result.minutes+60;
	}

	return result;
}
Time Time::operator*(int mulTimes){//реализация перезагрузки оператора *
	Time result;

	result.hours=this->hours*mulTimes;
	result.minutes=this->minutes*mulTimes;
	result.hours += result.minutes / 60;

	if (result.minutes>=60)
	{
		result.minutes = result.minutes % 60;
	}
	
	return result;
}
void Time::print()
{
	cout<<"hours"<<this->getHours()<<"minutes"<<this->getMinutes()<<" "<<endl;
}
void main()
{
	Time a, b, c, e,d,g;
	a.setTime(2,10);
	b.setTime(3,40);
	c=a+b;
	c.print();

	e.setTime(1,35);
	d=a-e;
	d.print();

	g=a*2;
	g.print();
}
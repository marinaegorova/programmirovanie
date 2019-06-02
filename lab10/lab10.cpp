#include "stdafx.h"
#include <iostream>
#include "stdio.h"

using namespace std;

class Time {
public:
	void setTime(long newHours, int newMinutes);
	long getHours();
	int getMinutes();
	Time operator+(Time & plusTime); //перезагрузка оператора +
	Time operator-(Time & minusTime); //перезагрузка оператора -
	Time operator*(int mulTimes); //перезагрузка оператора *
	bool operator<(Time &  minusTime); 
	bool operator>(Time &  minusTime);
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
Time Time::operator+(Time & plusTime){ //реализация перезагрузки оператора +
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
Time Time::operator-(Time & minusTime){ //реализация перезагрузки оператора -
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
Time Time::operator*(int mulTimes){ //реализация перезагрузки оператора *
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
bool Time::operator<(Time & minusTime)
{
	if (this->hours<minusTime.hours) return true;
	else return false;
}

bool Time::operator>(Time & minusTime) 
{
	if (this->hours>minusTime.hours) return true;
	else return false;
}

void Time::print()
{
	cout<<"hours"<<this->getHours()<<"minutes"<<this->getMinutes()<<" "<<endl;
}
void main()
{
	/*a.setTime(2,10);
	b.setTime(3,40);
	c=a+b;
	c.print();

	e.setTime(1,35);
	d=a-e;
	d.print();

	g=a*8;
	g.print();*/
	Time a[10], temp;
	a[0].setTime(2,30);
	a[1].setTime(3,20);
	a[2].setTime(2,40);
	a[3].setTime(4,15);
	a[4].setTime(1,45);
	a[5].setTime(2,35);
	a[6].setTime(3,10);
	a[7].setTime(1,50);
	a[8].setTime(2,20);
	a[9].setTime(1,10);


	for(int i = 0; i < 10 - 1; ++i) {
	for(int j = 0; j < 10 - i -1; j++) {
	if (a[j] > a[j+1]) {
			temp = a[j];
			a[j] = a[j+1];
			a[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
	a[i].print();
	}
}
	
	
   
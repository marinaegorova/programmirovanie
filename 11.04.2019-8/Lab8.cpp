// Lab8.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

class Department //информация о Главе департамента
	{
private:
	std::string name;
	Employee * head;
public:
	void setName(std::string newName);
	std::string getName();
	void setHead(Employee * newHead);
	Employee* getHead();
	void print();
};


class Employee //информация о Идентификационной карточке работника
	{
private:	
	std::string position;
	std::string name;
	idCard * card;
	int room;
	Department * department;
public:
	void setName(std::string newName);
	std::string getName();
	void setPosition(string newPosition);
	std::string getPosition();
	void setidCard(class idCard * newidCard);
	idCard * getidCard ();
	void setRoom(int newRoom);
	int Employee::getRoom();
	void setDepartment(Department *  newDepartment);
	Department * getDepartment ();
	void print();
	};


class idCard
	{
private:
	int number;
	std::string dateExpire;
public:
	void setNumber(int newNumber);
	int getNumber();
	void setDateExpire(string newDateExpire);
	std::string getDateExpire();
	void print();
};
void Department::setName(string newName)
{
	name = newName;
	return;
}
string Department::getName()
{
	return this->name;

}
void Department::setHead(Employee * newHead)
{
	head = newHead;
	return;
}
void  Department::print()
{
}
void Employee::setPosition(string newPosition)
{
	position = newPosition;
	return;
}
std::string Employee::getPosition()
{
	return this->position;
}
void Employee::setidCard(idCard* newidCard)
{
	card = newidCard;
	return;
}

idCard* Employee::getidCard()
{
	return this->card;
}

void Employee::setRoom(int newRoom)
{
	room = newRoom;
	return;
}
void Employee::setDepartment(Department* newDepartment)
{
	department = newDepartment;
}
Department* Employee::getDepartment()
{
	return this->department;
}
void Employee::print()
{
	cout << "Name: " << this->name << "\nPosition: " << this->position << "\nNumber cabinet: " <<"Room: "<<room << this->card->getNumber() << "Department: " << this->department->getName() << endl << endl;
}
void idCard::setNumber(int newNumber)
{
	number = newNumber;
	return;
}
void idCard::setDateExpire(string newDateExpire)
{
	this->dateExpire = newDateExpire;
	return;
}

int idCard::getNumber()
{
	return this->number;
}

void idCard::print()
{
	cout << this->number << std::endl;
}
int Employee::getRoom()
{
	return this->room;
}

void main()
{
	Department dptAdm;
	Department dptDev;

	Employee headDep, mainDev, dev, director, subDirector, mainAccountant;
	idCard headDep101, mainDev5016, devId5018, director201, subDirector201, mainAccountant202;

	dptDev.setName("Developers");
	dptAdm.setName("Administration");

	headDep101.setNumber(101);
	mainDev5016.setNumber(5016);
	devId5018.setNumber(5018);
	director201.setNumber(201);
	subDirector201.setNumber(5022);
	mainAccountant202.setNumber(5019);

	headDep.setName("Ivan Ivanovich Ivanov");;
	headDep.setPosition("HeadDepartment");
	headDep.setRoom(101);
	headDep.setidCard(&headDep101);
	headDep.setDepartment(&dptDev);
	dptDev.setHead(&headDep);

	mainDev.setName("Petrov Petr Petrovich");;
	mainDev.setPosition("MainDeveloper");
	mainDev.setRoom(102);
	mainDev.setidCard(&mainDev5016);
	mainDev.setDepartment(&dptDev);
	dptDev.setHead(&mainDev);

	dev.setName("Sidorov Sidor Sidorovich");
	dev.setPosition("Developer");
	dev.setRoom(102);
	dev.setidCard(&devId5018);
	dev.setDepartment(&dptDev);
	dptDev.setHead(&dev);

	director.setName("Mikhailov Mikhail Mikhailovich");
	director.setPosition("Director");
	director.setRoom(201);
	director.setidCard(&director201);
	director.setDepartment(&dptAdm);
	dptAdm.setHead(&director);

	subDirector.setName("Alexandrovna Alexandra Alexandrovna");
	subDirector.setPosition("SubDirector");
	subDirector.setRoom(201);
	subDirector.setidCard(&subDirector201);
	subDirector.setDepartment(&dptAdm);
	dptAdm.setHead(&subDirector);

	mainAccountant.setName("Evgenevna Evgenia Evgeneva");
	mainAccountant.setPosition("MainAccountant");
	mainAccountant.setRoom(202);
	mainAccountant.setidCard(&mainAccountant202);
	mainAccountant.setDepartment(&dptAdm);
	dptAdm.setHead(&mainAccountant);

	headDep.print();
	mainDev.print();
	dev.print();

	director.print();
	subDirector.print();
	mainAccountant.print();
}
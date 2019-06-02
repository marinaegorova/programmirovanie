// ConsoleApplication12.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <conio.h>
/*
DWORD WINAPI thread2(LPVOID);

using namespace std;

volatile int i;

int main()
{
	cout << "First thread\n";
	HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
	cout << "More data from first thread\n";
	char string;
	i=1;
	for (; ;)
		
	{
		if (i==1){

			i=-1;
		}
		else {
			i=1;
		}
		
		
	}
	{}
	cout << "Even more data from first thread\n";
	_getch();
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	
	for (; ;)
	{
			
		cout<< i  <<endl<<endl;
	}
	cout << "Second thread\n";
	return 0;
}
*/


using namespace std;



HANDLE thread[5];
int first = 0;
int second = 0;
int third = 0;

DWORD WINAPI thread0(LPVOID);
DWORD WINAPI thread1(LPVOID);
DWORD WINAPI thread2(LPVOID);
DWORD WINAPI thread3(LPVOID);
DWORD WINAPI thread4(LPVOID);

int main()
{
	setlocale(LC_ALL, "Russian");

	thread[0] = CreateThread(NULL, 0, thread0, NULL, 0, NULL);
	thread[1] = CreateThread(NULL, 0, thread1, NULL, 0, NULL);
	thread[2] = CreateThread(NULL, 0, thread2, NULL, 0, NULL);
	thread[3] = CreateThread(NULL, 0, thread3, NULL, 0, NULL);
	thread[4] = CreateThread(NULL, 0, thread4, NULL, 0, NULL);

	DWORD wait = WaitForMultipleObjects(5, thread, true, INFINITE);

	cout <<"Первый:" << first << "\n";
	cout <<"Второй:"<< second << "\n";
	cout <<"Третий:"<< third << "\n";
	cout  <<"Всего:" << first + second + third<< "\n";
	return 0;
}

DWORD WINAPI thread0(LPVOID t)
{
	for (int i = 0; i < 500; i++)
	{
		int a = rand() % 3 + 1;
		if (a == 1) {
			::first++;
		}
		if (a == 2) {
			::second++;
		}
		if (a == 3) {
			::third++;
		}
	}
	return 0;
}

DWORD WINAPI thread1(LPVOID t)
{
	for (int i = 0; i < 500; i++)
	{
		int a = rand() % 3 + 1;
		if (a == 1) {
			::first++;
		}
		if (a == 2) {
			::second++;
		}
		if (a == 3) {
			::third++;
		}
	}
	return 0;
}

DWORD WINAPI thread2(LPVOID t)
{
	for (int i = 0; i < 500; i++)
	{
		int a = rand() % 3 + 1;
		if (a == 1) {
			::first++;
		}
		if (a == 2) {
			::second++;
		}
		if (a == 3) {
			::third++;
		}
	}
	return 0;
}

DWORD WINAPI thread3(LPVOID t)
{
	for (int i = 0; i < 500; i++)
	{
		int a = rand() % 3 + 1;
		if (a == 1) {
			::first++;
		}
		if (a == 2) {
			::second++;
		}
		if (a == 3) {
			::third++;
		}
	}
	return 0;
}

DWORD WINAPI thread4(LPVOID t)
{
	for (int i = 0; i < 500; i++)
	{
		int a = rand() % 3 + 1;
		if (a == 1) {
			::first++;
		}
		if (a == 2) {
			::second++;
		}
		if (a == 3) {
			::third++;
		}
	}
	return 0;
}
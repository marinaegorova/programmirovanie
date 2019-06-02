#include <iostream>
#include <string>
#include <stdlib.h>
#include "mylibrary.h"

using namespace std;

//Функция для ручного ввода
void read_complex(struct complex *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter value Number" << i+1 << ": ";
		cin >> a[i].x;
		cout << "Enter value Number" << i+1 << ": ";
		cin >> a[i].y;
	}
}
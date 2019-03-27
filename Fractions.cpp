#include "pch.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "Fractions.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	Fractions a, b, c;
	a.read();
	cout << "\nnumber one: ";
	a.display();
	b.read();
	cout << "\nnumber two: ";
	b.display();
	c.Add(a, b);
	c.Sub(a, b);
	c.Mul(a, b);
	c.Equal(a, b);

	system("pause");

	return 0;
}

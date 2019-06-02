#include <iostream>
#include <string>
#include <stdlib.h>
#include "mylibrary.h"

using namespace std;

struct complex a[5];
double c, d;

void main() 
{
	read_complex(a, 5);

	cout << '\n' << "Values X,Y";
	for (int i = 0; i < 5; i++)
	{
		cout << '\n';
		cout << "x: " << a[i].x;
		cout << '\n';
		cout  << "y: " << a[i].y;
	}
}
// Win32Project1ROM.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include "mylibrary.h"

using namespace std;

extern "C" __declspec(dllexport) void read_complex(struct complex *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter value Number" << i+1 << ": ";
		cin >> a[i].x;
		cout << "Enter value Number" << i+1 << ": ";
		cin >> a[i].y;
	}
}


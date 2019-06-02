#include "pch.h"
#include "book.h"
#include <iostream>
#include <string>
#include "stdio.h"

using namespace std;

void book::set_name(const char * new_name)
{
	this->name = new_name;
	return;
}
void book::set_year(const int new_year)
{
	this->year = new_year;
	return;
}


void book::get_name() {
	cout << ", " << this->name << endl;
	return;
}
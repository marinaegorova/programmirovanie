#include "pch.h"
#include "reader.h"
#include <iostream>

using namespace std;

void reader::set_fio(const char * new_fio)
{
	this->fio = new_fio;
	return;
}

void reader::set_age(const int new_age)
{
	this->age = new_age;
	return;
}

void reader::set_current_book(const book new_current_book)
{
	this->current_book = new_current_book;
	return;
}

void reader::get_info()
{
	cout << fio;
	current_book.get_name();
	return;
}
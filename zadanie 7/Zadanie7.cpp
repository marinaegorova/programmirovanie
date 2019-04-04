// Zadanie7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include "mage.h"
#include "spell.h"
#include <iostream>
using namespace std;

class spell

	{
public:
	string name;
	int dhp;
	int dmp;
	};

class mage
	{
private:
	int hp;
	int mp;
	string name;

public:
	void init( int newhp, int newmp, string newname)
	{
		this->hp=newhp;
		this->mp=newmp;
	}
	string getname()
	{
		return this->name;
	}
	void say (string text)
	{
		cout << this->name << "Say" << text;
	}
	int cast(spell spl, mage target);
	void hit(spell spl);
	};




	int _tmain(int argc, _TCHAR* argv[])
	{
	mage vanya, boris;
	vanya init()
	
	}


// Zadanie7.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class spell
{
public:
	std::string name;
	int dhp;
	int dmp;
};

class mage
{
private:
	int hp;
	int mp;
	std::string name;

public:
	void init(int newhp, int newmp, string newname);
	std::string getname();
	void say(std::string text);
	int cast(spell &spl, mage &target);
	void hit(spell &spl);
};
void mage::init(int newhp, int newmp, std::string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}
string mage::getname()
{
	return this->name;
}

void mage::say(std::string text)
{
	cout << this->name << " says " << text << endl << endl;
}

int mage::cast(Spell &spl, mage &target)
{
	if (hp > 0)
	{
		cout << this->name << " hit with " << spl.name << " rival " << target.getname() << endl << endl;
		target.hit(spl);
	}

	else
	{
		this->say("I'm defeated");
	}
	return 0;
}

void mage::hit(Spell &spl)
{
	this->hp -= spl.dhp;
	this->mp -= spl.dmp;
	if (hp <= 0)
	{
		this->say(" ooohh... I give up");
	}
}


void main()
{
	mage Ivan;
	mage Boris;
	spell bolt;
	spell drain;

	bolt.name = "Bolt";
	bolt.dhp = 44;
	bolt.dmp = 2;

	drain.name = "Drain";
	drain.dhp = 10;
	drain.dmp = 60;

	Ivan.init(150, 150, "Ivan");
	Ivan.say("I challenge you");

	Boris.init(150, 150, "Boris");
	Boris.say("I'm ready");

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);

	Ivan.cast(bolt, Boris);
	Boris.cast(drain, Ivan);
}


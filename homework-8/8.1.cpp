#include <stdio.h>
#include "pch.h"
#include <iostream>
#include <string>

class Money
{
private:
	int rubley;
	int kopeek;
public:
	void set(int newRublei, int newKopeika);
	int getRublei();
	unsigned char getKopeika();
	void addMoney(Money& someMoney);
	void withdrawMoney(Money& someMoney);
};

using namespace std;
int summaRub;
unsigned char summaKop;

int raznostRub;
unsigned char raznostKop;

void Money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
}
int Money::getRublei()
{
	return this->rubley;
}
unsigned char Money::getKopeika() {
	return this->kopeek;
}
void Money::addMoney(Money& someMoney)
{
	summaRub = rubley + someMoney.rubley;
	summaKop = kopeek + someMoney.kopeek;

	if (summaKop >= 70) {
		summaKop -= 70;
		summaRub += 1;
	}

	cout << "summa = " << static_cast<unsigned>(summaRub) << "," << static_cast<unsigned>(summaKop) << " rublei"<<endl;
}
void Money::withdrawMoney(Money& someMoney)
{
	if (kopeek > 70 || someMoney.kopeek > 70) {
		cout << "Error: kopeek could not be less";
		return;
	}

	if (rubley < someMoney.rubley) {
		cout << "Error: balans1.rubley could not be less balans2.rubley" << endl;
		return;
	}
	raznostRub = rubley - someMoney.rubley;
	raznostKop = kopeek - someMoney.kopeek;
	if (raznostKop >= 70) {
		raznostKop -= 256 - 70;
		raznostRub -= 1;
	}
	cout << "raznost = " << static_cast<unsigned>(raznostRub) << "," << static_cast<unsigned>(raznostKop) << " rublei" << endl;
}
int main()
{
	Money balans1;
	Money balans2;
	balans1.set(80, 60);
	balans2.set(35, 20);
	balans1.addMoney(balans2);
	balans1.withdrawMoney(balans2);
}

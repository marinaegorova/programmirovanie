#include "pch.h"
#include <iostream>

class Money
{
private:
	int rubley;
	int kopeek;
public:
	void set(int newRubley, int newKopeek);
	int getRubley();
	int getKopeek();

	Money operator+(Money &plusCash);
	Money operator-(Money & minusCash);
	Money operator*(int multCash);
	void print();
};
using namespace std;

void Money::set(int newRubley, int newKopeek)
{
	rubley = newRubley;
	kopeek = newKopeek;
}
int Money::getRubley()
{
	return this->rubley;
}
int Money::getKopeek() {
	return this->kopeek;
}
Money Money::operator+(Money &plusCash)
{
	Money result;
	result.rubley = this->rubley + plusCash.rubley;
	result.kopeek = this->kopeek + plusCash.kopeek;
	if (result.kopeek >= 100) {
		result.rubley = result.rubley + 1;
		result.kopeek -= 100;
	}
	return result;
}
Money Money::operator-(Money & minusCash)
{
	Money result;
	result.rubley = this->rubley - minusCash.rubley;
	result.kopeek = this->kopeek - minusCash.kopeek;
	if (result.kopeek <= 0) {
		result.rubley= result.rubley-1;
		result.kopeek += 100;
	}
	return result;
}
Money Money::operator*(int multCash)
{
	Money result;

	result.rubley = this->rubley * multCash;
	result.kopeek = this->kopeek * multCash;

	result.rubley += result.kopeek / 100;

	while (result.kopeek >= 100)
		result.kopeek -= 100;

	return result;
}
void Money::print()
{
	cout << this->rubley << " rubley " << this->kopeek << " kopeek" << endl;
}
int main()
{
	Money a, b, e, c, d;

	a.set(80, 40);
	b.set(35, 90);

	c = a + b;
	e = a - b;
	d = a * 3;

	c.print();
	e.print();
	d.print();
}


#include <iostream>

using namespace std;

class Fractions
{
protected:
	long first;
	unsigned short second;

public:
	Fractions() {
		first = 0;
		second = 0;
	}

	void init(long f, unsigned short s) {
		first = f;
		second = s;
	}

	void read() {
		cout << "\n�����: "; cin >> first;
		cout << "�������: "; cin >> second;
	}

	void display() {
		cout << first << "." << second << endl;
	}

	static void Add(Fractions a, Fractions b) {
		cout << "\n��������: " << a.first + b.first << "." << a.second + b.second << endl;
	}

	static void Sub(Fractions a, Fractions b) {
		cout << "���������: " << a.first - b.first << "." << a.second - b.second << endl;
	}

	static void Mul(Fractions a, Fractions b) {
		cout << "���������: " << a.first*b.first << "." << a.second*b.second << endl;
	}

	static void Equal(Fractions a, Fractions b) {
		if (a.first == b.first && a.second == b.second)
		{
			cout << "\n���������: are equal\n\n\n" << endl;
		}
		else {
			if ((a.first - b.first) > 0) {
				cout << "\n���������: number one > number two\n\n\n";
			}
			else {
				cout << "\n���������: number one < number two\n\n\n";
			}
		}
	};
};


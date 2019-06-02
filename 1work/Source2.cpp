#include <iostream>
using namespace std;

struct complex
{
double x;
double y;
};

struct complex a[5];
int size_arr = 5;
double tempX;
double tempY;
bool noSwap;

void Read_complex(struct complex *a, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter value NumberX" << i+1 << ": ";
		cin >> a[i].x;
		cout << "Enter value NumberY" << i+1 << ": ";
		cin >> a[i].y;
	}
}

void Sort_array()
{
	// Сортировка массива пузырьком
	for (int i = 0; i < size_arr - 1; i++) {
		for (int j = 0; j < size_arr - i - 1; j++) {
			if (a[j].x > a[j + 1].x) {
				// меняем элементы местами
				tempX = a[j].x;
				a[j].x = a[j + 1].x;
				a[j + 1].x = tempX;
			}

			if (a[j].y > a[j + 1].y)
			{
				tempY = a[j].y;
				a[j].y = a[j + 1].y;
				a[j + 1].y = tempY;
			}
		}
	}
}
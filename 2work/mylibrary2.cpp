#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include "mylibrary.h"

using namespace std;

string arrValues;
string buf;
string filename = "inputInt";

//������� ��� ������ �� �����
void read_complex(struct complex *a, int size)
{

	//��������� ��������� ����
	ifstream fin(filename + ".txt");
	if (!fin.is_open())
		cout << "Incorrect file! " << filename << ".txt" << endl << endl;
	else
	{
		cout << "Open file " << filename << ".txt --->" << endl;

		while (fin)
		{
			getline(fin, arrValues); //�������� ������ �� ���������� ��� �������
		}
		fin.close();
		cout << "Values from file: " << arrValues << '\n';

		//��������� ������ �� ���������� � ��������� � ������(������)
		vector<string> stringVector;
		stringstream ss(arrValues);
		while (ss >> buf)
			stringVector.push_back(buf);

		//��������� string ������ � double ������
		vector<double> doubleVector(stringVector.size());
		transform(stringVector.begin(), stringVector.end(), doubleVector.begin(),
			[](string const& val) {return stod(val);});

		//��������� �������� �� ����� � X � Y
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			a[i].x = doubleVector[count];
			a[i].y = doubleVector[++count];
			count++;
		}
		
	}
}
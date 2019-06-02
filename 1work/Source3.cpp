#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string arrValues;
string buf;


void ArrayToFile(string fileNameInput, string fileNameOutput)
{
	//��������� ��������� ����
	ifstream fin(fileNameInput+".txt");
	if (!fin.is_open())
		cout << "Incorrect file! " << fileNameInput << ".txt" << endl << endl;
	else
	{
		char* sizeArr = new char[2];
		fin.get(sizeArr, 3);
		cout << "Open file " << fileNameInput << ".txt --->" << endl;
		cout << "Size array: " << sizeArr << endl;

		while (fin)
		{
			getline(fin, arrValues); //�������� ������ �� ���������� ��� �������
		}
		fin.close();
		cout << "Values for array: " << arrValues;

		//��������� ������ �� ���������� � ��������� � ������(������)
		vector<string> stringVector;
		stringstream ss(arrValues);
		while (ss >> buf)
			stringVector.push_back(buf);

		//��������� string ������ � double ������
		vector<double> doubleVector(stringVector.size());
		transform(stringVector.begin(), stringVector.end(), doubleVector.begin(),
			[](string const& val) {return stod(val);});

		//��������� ������
		double temp;
		for (int i = 0; i < doubleVector.size() - 1; i++) {
			for (int j = 0; j < doubleVector.size() - i - 1; j++) {
				if (doubleVector[j] > doubleVector[j + 1]) {
					// ������ �������� �������
					temp = doubleVector[j];
					doubleVector[j] = doubleVector[j + 1];
					doubleVector[j + 1] = temp;
				}
			}
		}
		cout << endl << "Sort array:       ";
		for (int i = 0; i < doubleVector.size(); i++){ cout << doubleVector[i] << " "; }

		//��������� ��������������� ������ � ����
		ofstream fout(fileNameOutput+".txt", ios_base::out | ios_base::trunc);
		if (!fout.is_open())
			cout << "File cannot be opened or created";
		else {
			fout << "��������������� ������ ������� �������!" << endl;
			for (int i = 0; i < doubleVector.size(); i++){ fout << doubleVector[i] << " "; }

			fout.close();
			cout << endl << "Data successfull write to " << fileNameOutput << ".txt <---" << endl << endl;
		}
	}
}

int main()
{
	ArrayToFile("input1","output1"); //����� ������ ��� ����������
	ArrayToFile("input2","output2"); //����� ������ ��� ����������
}
#include "pch.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	ifstream fin ("C:\\Users\\Иванов\\Desktop\\Программирование\\textFile1Lab5.txt");
	ofstream fout("C:\\Users\\Иванов\\Desktop\\Программирование\\textFile2Lab5.txt");
	int N, k;
	int A[1000];
	if (!fin.good())
	{
		cout << "Файл input.txt не найден!" << endl;
	}
	else
	{
		k = 0;
		while (fin >> N)
		{
			A[k++] = N;
		}
		int tmp = A[1];
		int tpm = A[1];
		for (int i = 0; i < k; i++)
		{
			if (A[i] < tmp)
				tmp = A[i];
			if (A[i] > tpm)
				tpm = A[i];
		}

		cout << "Искомый массив:" << endl;
		for (int i = 0; i < k; i++)
		{
			cout << A[i] << " ";
		}
		tmp += tpm;
		cout << "\nRuselt:	" << tmp << endl;

	}
	fin.close();
	fout.close();
	cin.get();
	return 0;
}
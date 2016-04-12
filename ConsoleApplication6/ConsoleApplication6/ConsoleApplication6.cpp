// masiv.cpp: ���������� ����� ����� ��� ����������� ����������.
//� ��������� ������� ������������ ����� �������� (N,M), 
// ����������� ������ ���, ����� ����� �� ��������� ����������.

#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	const int N = 5; // ������ ������� ����� ������������  5 - �������� ��������
	const int M = 3; // �������� ������� ����� ����������� 3 - �������� ��������
	//������ ������
	int array[N][M];
	//�������� ���������� �������
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			array[i][j] = 1 + rand() % 10; // ��������� ����� � ��������� �� 1 �� 10
			cout << array[i][j] << ","; // ����������� ����� �������
		} // for j
		cout << endl;
	}// for i

	// ������ �������� � ���� ��������
	int sumelement[N]; // ��� �������� ����� ���������
	int d = 0;
	cout << "����� ��������� � �������" << endl;
	for (int k = 0; k < N; k++)   // ������
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)  // ��������
		{
			sumelement[d] += array[k][m];
		};
		cout << sumelement[d] << endl;
		d++;
	}
	// ����������� ��������

	for (int w = 0; w < N - 1; w++) {
		for (int x = 0; x < N - w - 1; x++) {
			if (sumelement[x] > sumelement[x + 1]) // ���� ����� �������� ������ ������
			{
				int tmpsum = sumelement[x]; //������������ ����� ���������
				sumelement[x] = sumelement[x + 1];
				sumelement[x + 1] = tmpsum;
				//������������ ��������
				for (int b = 0; b < M; b++)
				{
					int tmp = array[x][b];
					array[x][b] = array[x + 1][b];
					array[x + 1][b] = tmp;
				} //for b
			} //if
		} // x
	}// w

	// ���������
	cout << "���������" << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << array[i][j] << ","; // ����� �������
		} // for j
		cout << endl;
	}// for i
	// ������� � 
	d = 0;
	cout << "����� ��������� � ������� � �������� �������" << endl;
	for (int k = 0; k < N; k++)   // ������
	{
		sumelement[k] = 0;
		for (int m = 0; m < M; m++)  // ��������
		{
			sumelement[d] += array[k][m];
		};
		cout << sumelement[d] << endl;
		d++;
	}
	system("pause");
	return 0;
}


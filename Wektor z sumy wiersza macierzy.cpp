#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
		const int WMAX = 20;
		float A[WMAX][WMAX];
		int n, i, j;
		do{
			cout << "Podaj liczbe kolumn i wierszy macierzy A:";
			cin >> n;
		} while (n < 1 || n > WMAX);
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << endl << "Podaj A[" << (i + 1) << "," << (j + 1) << "]:";
				cin >> A[i][j];
			}
		}
		cout << endl << "Macierz A:" << endl << endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << A[i][j] << "   ";
			}
			cout << endl << endl;
		}
		
		float sumawie;
		float W[WMAX];
		for (i = 0; i < n; i++)
		{
			sumawie = 0;
			for (j = 0; j < n; j++)
			{
				sumawie = sumawie + A[i][j];
			}
			W[i] = sumawie;
		}
		for (i = 0; i < n; i++)
		{
			cout << W[i] << "   ";
		}
		float max, min;
		min = A[n - 1][0];
		max = A[n - 1][0];
		for (j = 1; j < n; j++)
		{
			if (A[n - 1][j]<min)
				min = A[n - 1][j];
			if (A[n - 1][j]>max)
				max = A[n - 1][j];
		}
		cout << "Min=" << min << "  Max=" << max;
	return 0;
}


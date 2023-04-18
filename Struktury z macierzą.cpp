#include "stdafx.h"
#include <iostream>
using namespace std;
struct zesp{
	float re, im;
};
const int nmax = 10;
const int mmax = 10;
int i, j;
float A[mmax][nmax];
float B[nmax];
float C[nmax];
void wczytaj_zesp(int m, int n, zesp A[][10])
{
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << endl << "A[" << (i + 1) << "," << (j + 1) << "]:";
			cout << endl << "Podaj czesc rzeczywista:";
			cin >> A[i][j].re;
			cout << endl << "Podaj czesc urojona:";
			cin >> A[i][j].im;
		}
	}
}
void wypisz_zesp(int m, int n, zesp A[][10])
{
	cout << endl;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << A[i][j].re << " + " << A[i][j].im << "i" << "    ";
		}
		cout << endl;
	}
}
zesp srednia(int m, int n, zesp A[][10])
{
	float iloscim = 0, sumaim = 0, sumare = 0, iloscre = 0, sredniaim, sredniare;
	zesp wynik;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sumaim = sumaim + A[i][j].im;
			sumare = sumare + A[i][j].re;
			iloscim = iloscim + 1;
			iloscre = iloscre + 1;
		}
	}
	sredniare = sumare / iloscre;
	sredniaim = sumaim / iloscim;
	wynik.re = sredniare;
	wynik.im = sredniaim;
	return wynik;
}
void tworz_wektor(int k, zesp A[], zesp B[], zesp C[])
{
	for (i = 0; i < k; i++)
	{
		C[i].re = A[i].re + B[i].re;
		C[i].im = A[i].im + B[i].im;
	}
}
void wypisz_wektor(int k, zesp C[])
{

	for (i = 0; i < k; i++)
	{
		cout << endl << C[i].re << "+" << C[i].im << "i";
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	int m, n;
	zesp A[mmax][nmax];
	zesp B[nmax];
	zesp C[nmax];
	cout << "Podaj ile wierszy ma miec macierz:" << endl;
	cin >> m;
	cout << "Podaj ile kolumn ma miec macierz:" << endl;
	cin >> n;
	wczytaj_zesp(m, n, A);
	wypisz_zesp(m, n, A);

	zesp wynik;
	wynik = srednia(m, n, A);
	cout << endl << "Srednia calej macierzy wynosi:" << wynik.re << "+" << wynik.im << "i";
	tworz_wektor(n, A[0], A[m - 1], C);
	cout << endl << endl << "Wektor, bedacy suma pierwszego i ostatniego wiersza macierzy:";
	wypisz_wektor(n, C);
	zesp X[mmax], Y[mmax], Z[mmax];
	for (int i = 0; i < m; i++)
	{
		X[i] = A[i][0];
		Y[i] = A[i][n - 1];
	}
	tworz_wektor(m, X, Y, Z);
	cout << endl << endl << "Wektor, bedacy suma pierwszej i ostatniej kolumny macierzy:";
	wypisz_wektor(m, Z);

	return 0;
}
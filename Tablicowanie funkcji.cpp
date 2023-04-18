#include "stdafx.h";
#include <iostream>
using namespace std;
double pierwsza(double x)
{
	return 2 * x + 1;
}
double druga(double x)
{
	return 2 * (x*x) + 1;
}
double trzecia(double x)
{
	int k = 2;
	double y = x;
	double w = x;
	do
	{
		w = -w*(x*x) / (k*(k + 1));
		y += w;
		k = k + 2;
	} while (w>0.001 && w<0.001);
	return y;
}
void tablicuj(double A, double B, double H, double(*y)(double))
{
	for (double i = A; (i - B) <= 0.00001; i += H)
	{
		cout << "x = " << i << "  f(x) = " << y(i) << "\n";
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
		int a;
		float x =1, A, B, H, w;
		cout << endl << "Program tablicuje funkcje z podanym poczatkiem przedzialu, koncem i krokiem dla wybranej funkcji:" << endl;
		cout << "1. f(x)=2x+1" << endl;
		cout << "2. f(x)=2x^2+1" << endl;
		cout << "3. f(x)=sinx" << endl;
		cout << "wybierz 1,2 lub 3" << endl;
		cin >> a;
		switch (a)
		{

		case 1:
		{
				  int A, B, H;
				  cout << endl << "Podaj A:";
				  cin >> A;
				  cout << endl << "Podaj B:";
				  cin >> B;
				  cout << endl << "Podaj H:";
				  cin >> H;
				  tablicuj(A, B, H, pierwsza);
				  break;
		}
		case 2:
		{
				  int A, B, H;
				  cout << endl << "Podaj A:";
				  cin >> A;
				  cout << endl << "Podaj B:";
				  cin >> B;
				  cout << endl << "Podaj H:";
				  cin >> H;
				  tablicuj(A, B, H, druga);
				  break;
		}
		case 3:
		{
				  int A, B, H;
				  cout << endl << "Podaj A:";
				  cin >> A;
				  cout << endl << "Podaj B:";
				  cin >> B;
				  cout << endl << "Podaj H:";
				  cin >> H;
				  tablicuj(A, B, H, trzecia);
				  break;
		}
	}
	return 0;
}
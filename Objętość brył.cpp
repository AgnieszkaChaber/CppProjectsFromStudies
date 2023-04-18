#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int a, h, r;
	float objetosc;
	const double pi = 3.14;
	cout << "Ten program oblicza objetosc bryl: " << endl << "1.Kuli" << endl << "2.Stozka" << endl << "3.Walca" << endl << "Wybierz opcje (1,2,3):";
	cin >> a;
	switch (a)
	{
		case 1:
			cout << endl <<"Podaj promien kuli:";
			cin >> r;
			objetosc = (4 / 3.0)*pi*pow(r, 3);
			cout << endl << "Objetosc kuli wynosi " << objetosc;
			break;
		case 2:
			cout << endl << "Podaj promien stozka:";
			cin >> r;
			cout << endl <<"Podaj wysokosc stozka:";
			cin >> h;
			objetosc = (1/ 3.0)*pi*pow(r, 2)*h;
			cout << endl << "Objetosc stozka wynosi " << objetosc;
			break;
		case 3:
			cout << endl <<"Podaj promien walca:";
			cin >> r;
			cout << endl << "Podaj wysokosc walca:";
			cin >> h;
			objetosc = pi*pow(r, 2)*h;
			cout << endl << "Objetosc walca wynosi " << objetosc;
			break;
	}
	return 0;
}


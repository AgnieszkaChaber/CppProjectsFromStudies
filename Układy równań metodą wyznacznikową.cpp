#include "stdafx.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	float W, Wx1, Wx2;
	float a1, a2, b1, b2, c1, c2, x1, x2;
	cout << endl << "Ten program rozwiazuje uklad dwoch rownan w postaci:" << endl << "a1x1+b1x2=c1" << endl << "a2x1+b2x2=c2" << endl << "metoda wyznacznikowa." << endl;
	cout << endl << "Podaj a1:";
	cin >> a1;
	cout << endl << "Podaj a2:";
	cin >> a2;
	cout << endl << "Podaj b1:";
	cin >> b1;
	cout << endl << "Podaj b2:";
	cin >> b2;
	cout << endl << "Podaj c1:";
	cin >> c1;
	cout << endl << "Podaj c2:";
	cin >> c2;
	W = a1*b2 - a2 * b1;
	Wx1 = c1*b2 - c2*b1;
	Wx2 = a1*c2 - a2*c1;
	if (W != 0)
	{
		x1 = Wx1 / W;
		x2 = Wx2 / W;
		cout << "Rownanie ma dwa rozwiazania:" << endl << "x1=" << x1 << endl << "x2=" << x2 << endl;
	}
	else
	{
		if (Wx1 == 0 && Wx2 == 0)
		{
			cout << "Rownanie ma nieskonczenie wiele rozwiazan." << endl;
		}
		else
			cout << "Uklad rownan jest sprzeczny." << endl;
	}
	return 0;
}


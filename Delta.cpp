#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	float a, b, c, delta, x1, x2;
	cout << "Ten program rozwiazuje rownanie kwadratowe ax^2+bx+c=0" << endl << endl << "Podaj a:";
	cin >> a;
	cout << endl << "Podaj b:";
	cin >> b;
	cout << endl << "Podaj c:";
	cin >> c;
	delta = pow(b, 2) - 4 * a*c;
	if (a == 0)
	{
		cout << endl << "To nie jest rownanie kwadratowe." << endl;
	}
	else
	{
		if (delta == 0)
		{
			x1 = -b / 2 * a;
			cout << endl <<"Rownanie ma jedno rozwiazanie: x1 = x2 = " << x1 << endl;
		}
		if (delta > 0)
		{
			x1 = ((-b) - sqrt(delta)) / 2 * a;
			x2 = ((-b) + sqrt(delta)) / 2 * a;
			cout << endl <<"Uklad rownan ma dwa rozwiazania:" << endl << "x1=" << x1 << endl << "x2=" << x2 << endl;
		}
		else
			cout << endl << "Rownanie nie ma pierwiastkow rzeczywistych.";
	}
	return 0;
}


#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int m, n, o;
	cout << "Wprowadz zmienna m: " << endl;
	cin >> m;
	cout << "Wprowadz zmienna n: " << endl;
	cin >> n;
	while (m != n)
	{
		if (m > n)
		{
			o = m - n;
			m = o;
		}
		if (m < n)
		{
			o = n - m;
			n = o;
		}
	}
	cout << n << endl << m << endl;
	system("pause");
}


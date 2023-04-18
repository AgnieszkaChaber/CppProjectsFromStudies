#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct osoba{
	char imie[20];
	char nazwisko[20];
	float stankonta;
};
osoba wczytaj_osobe(int n)
{
	osoba x;
	cout << endl << "Podaj dane osoby numer:" << n << endl;
	cout << endl << "Podaj imie:";
	cin >> x.imie;
	cout << endl << "Podaj nazwisko:";
	cin >> x.nazwisko;
	cout << endl << "Podaj stan konta:";
	cin >> x.stankonta;
	return x;
}
void wypisz_osobe(int n, osoba x)
{
	cout << endl << "Dane osoby numer:" << n+1;
	cout << endl << "Imie:" << x.imie ;
	cout << endl << "Nazwisko:" << x.nazwisko;
	cout << endl << "Stan konta:" << x.stankonta;
}
void licz_srednia(int n, osoba x)
{
	float i;
	float suma = 0;
	float srednia;
	float m;
	for (i=0; i < n ; i++)
	{
		m = x.stankonta;
		suma = suma + m;
	}
	srednia = suma / n;
	cout << endl << "Srednia wynosi: " << srednia;
}
int _tmain(int argc, _TCHAR* argv[])
{
	osoba X[20];
	int n, i=0;
	char T;
	char wybor;
	do{
		X[i] = wczytaj_osobe(i + 1);
		i++;
		cout << endl << "Czy chcesz wpisac kolejna osobe? Jesli tak, wpisz t: ";
		cin >> wybor;
	} while (wybor == 't');
	licz_srednia(i, X[i]);
	cout << endl << "Dane ktorej osoby chcesz wypisac?";
	cin >> i;
	wypisz_osobe((i-1), X[i-1]);
	return 0;
}

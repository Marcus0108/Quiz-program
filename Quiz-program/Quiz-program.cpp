

#include "pch.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
	int talEt;
	int talTo;
	int resultat;

	cout << "Vælg venligst et tal mellem 1 og 100" << endl;
	cin >> talEt;

	if (talEt >= 1 and talEt <= 100) {
		cout << "Vælg venligst et tal mellem 1 og 100 for at vælge et spørgsmål" << endl;
		cin >> talTo;
	}
	else {
		cout << "Jeg bad dig om at vælge et tal mellem 1 og 100, prøv igen" << endl;
		cin >> talEt;
	}


	cout << "Hvad er 64 divideret med 2?" << endl;
	cin >> resultat;

	if (resultat == 32)	{
		cout << "det er korrekt!";
	}
	else {
		cout << "Det er ikke korrekt!";
	}

	cin.ignore();
	cin.get();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu



#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
	
	int spm;
	{
		int resultat;

		cout << "Hvad er 64 divideret med 2?" << endl;
		cin >> resultat;

		if (resultat == 32)	{
			cout << "det er korrekt!";
		}
		else {
			cout << "Det er ikke korrekt!";
		}
	}

	cin.ignore();
	cin.get();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

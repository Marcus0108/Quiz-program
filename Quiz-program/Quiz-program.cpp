
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

int main()
{
	//Vælger et tal mellem 1 og 100
	int TalA;
	TalA = rand() % 100 + 1;

	//Kører spørgsmålet hvis det er inde for den valgte grænse
	if (TalA >= 1 and TalA <= 25) {
		string ResultatEt;
		cout << "Twitch er en live streaming tjeneste, som blev opkøbt den 25 august 2014" << endl;
		cout << "Hvem opkøbte Twitch?" << endl;
		cin >> ResultatEt;

		string TestEt ("Amazon");
		string TestEtTo ("amazon");

		if (!TestEtTo.compare(ResultatEt)) {
			cout << "Det er korrekt!" << endl;

			//vælger et nyt tal mellem 20 og 100
			TalA = rand() % 100 + 25;
		}
		else if (!TestEt.compare(ResultatEt)) {
			cout << "Det er korrekt!" << endl;

			//vælger et nyt tal mellem 20 og 100
			TalA = rand() % 100 + 25;
		}
		
		else {
			cout << "Det er desværre ikke korrekt!" << endl;
		}
	}

	

	cin.ignore();
	cin.get();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <stdio.h>

using namespace std;

int main()
{
	//Vælger et tal mellem 1 og 100
	int TalA;
	srand(time(NULL));
	TalA = rand() % 100 + 1;

	string ResultatEt;
	string SvarEtEt("Amazon");
	string SvarEtTo("amazon");

	string ResultatTo;
	string SvarTo("D");
	string SvarToTo("d");

	string ResultatTre;
	string SvarTre("B");
	string SvarTreTo("b");

	//Kører spørgsmålet hvis det er inde for den valgte grænse
	if (TalA >= 1 and TalA <= 24) {
		::cout << "Twitch er en live streaming tjeneste, som blev opkøbt den 25 august 2014" << endl;
		::cout << "Hvem opkøbte Twitch?" << endl << endl;
		::cin >> ResultatEt;

		if (!SvarEtEt.compare(ResultatEt)) {
			::cout << "Det er korrekt!" << endl << endl;

			//vælger et nyt tal mellem 25 og 100
			TalA = rand() % 100 + 25;

			if (TalA >= 25 and TalA <= 49) {


				::cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
				::cout << "I hvilket kvartal skete deres præstation?" << endl << endl;

				::cout << "A: Første kvartal" << endl;
				::cout << "B: Andet kvartal" << endl;
				::cout << "C: Tredje kvartal" << endl;
				::cout << "D: Fjerde kvartal" << endl;
				::cin >> ResultatTo;

				if (!ResultatTo.compare(SvarTo)) {
					::cout << "Det er korrekt!" << endl;

					//vælger et nyt tal mellem 50 og 100
					TalA = rand() % 100 + 50;

					if (TalA >= 50 and TalA <= 100) {


						::cout << "I 2017 fusionerede Siemens Wind Power med et spansk firma" << endl;
						::cout << "Hvilket firma fusionerede de med?" << endl << endl;

						::cout << "A: Navarra" << endl;
						::cout << "B: Gamesa" << endl;
						::cout << "C: Acciona Energy" << endl;
						::cout << "D: Iberdrola" << endl;
						::cin >> ResultatTre;

						if (!ResultatTre.compare(SvarTre)) {
							::cout << "Det er korrekt!" << endl;
						}

						else if (!ResultatTre.compare(SvarTreTo)) {
							::cout << "Det er korrekt!" << endl;
						}

						else {
							::cout << "Det er desværre ikke korrekt" << endl;
						}
					}
				}

				else if (!ResultatTo.compare(SvarToTo)) {
					::cout << "Det er korrekt!" << endl;

					//vælger et nyt tal mellem 50 og 100
					TalA = rand() % 100 + 50;

					if (TalA >= 50 and TalA <= 100) {

						::cout << "I 2017 fusionerede Siemens Wind Power med et spansk firma" << endl;
						::cout << "Hvilket firma fusionerede de med?" << endl << endl;

						::cout << "A: Navarra" << endl;
						::cout << "B: Gamesa" << endl;
						::cout << "C: Acciona Energy" << endl;
						::cout << "D: Iberdrola" << endl;
						::cin >> ResultatTre;

						if (!ResultatTre.compare(SvarTre)) {
							::cout << "Det er korrekt!" << endl;
						}

						else if (!ResultatTre.compare(SvarTreTo)) {
							::cout << "Det er korrekt!" << endl;
						}

						else {
							::cout << "Det er desværre ikke korrekt" << endl;
						}
					}


				}
			}

			else if (!ResultatEt.compare(SvarEtTo)) {

				//vælger et nyt tal mellem 25 og 100
				TalA = rand() % 100 + 25;

				if (TalA >= 50 and TalA <= 100) {

					::cout << "I 2017 fusionerede Siemens Wind Power med et spansk firma" << endl;
					::cout << "Hvilket firma fusionerede de med?" << endl << endl;

					::cout << "A: Navarra" << endl;
					::cout << "B: Gamesa" << endl;
					::cout << "C: Acciona Energy" << endl;
					::cout << "D: Iberdrola" << endl;
					::cin >> ResultatTre;

					if (!ResultatTre.compare(SvarTre)) {
						::cout << "Det er korrekt!" << endl;
					}

					else if (!ResultatTre.compare(SvarTreTo)) {
						::cout << "Det er korrekt!" << endl;
					}

					else {
						::cout << "Det er desværre ikke korrekt" << endl;
					}
				}
			}

			else {
				::cout << "Det er desværre ikke korrekt" << endl;
			}
		}


		else if (!SvarEtTo.compare(ResultatEt)) {
			cout << "Det er korrekt!" << endl << endl;

			//vælger et nyt tal mellem 25 og 100
			TalA = rand() % 100 + 25;

			if (TalA >= 25 and TalA <= 49) {

				cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
				cout << "I hvilket kvartal skete deres præstation?" << endl << endl;
				cin >> ResultatTo;

				cout << "A: Første kvartal" << endl;
				cout << "B: Andet kvartal" << endl;
				cout << "C: Tredje kvartal" << endl;
				cout << "D: Fjerde kvartal" << endl;

				if (!ResultatTo.compare(SvarTo)) {
					cout << "Det er korrekt!" << endl;

				}

				else if (!ResultatTo.compare(SvarToTo)) {
					cout << "Det er korrekt!" << endl;
				}

				else {
					cout << "Det er desværre ikke korrekt" << endl;
				}
			}
		}

		//Kører spørgsmålet hvis det er inden for den valgte grænse
		else if (TalA >= 50 and TalA <= 74) {

			cout << "I 2017 fusionerede Siemens Wind Power med et spansk firma" << endl;
			cout << "Hvilket firma fusionerede de med?" << endl << endl;

			cout << "A: Navarra" << endl;
			cout << "B: Gamesa" << endl;
			cout << "C: Acciona Energy" << endl;
			cout << "D: Iberdrola" << endl;
			cin >> ResultatTre;

			if (!ResultatTre.compare(SvarTre)) {
				cout << "Det er korrekt!" << endl;

				//vælger et nyt tal mellem 25 og 100
				TalA = rand() % 100 + 50;

				if (TalA >= 50 and TalA <= 74) {

					cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
					cout << "I hvilket kvartal skete deres præstation?" << endl << endl;
					cin >> ResultatTo;

					cout << "A: Første kvartal" << endl;
					cout << "B: Andet kvartal" << endl;
					cout << "C: Tredje kvartal" << endl;
					cout << "D: Fjerde kvartal" << endl;

					if (!ResultatTo.compare(SvarTo)) {
						cout << "Det er korrekt!" << endl;

						//vælger et nyt tal mellem 25 og 100
						TalA = rand() % 100 + 25;

						if (TalA >= 25 and TalA <= 100) {
							cout << "Twitch er en live streaming tjeneste, som blev opkøbt den 25 august 2014" << endl;
							cout << "Hvem opkøbte Twitch?" << endl << endl;
							cin >> ResultatEt;

							if (!SvarEtEt.compare(ResultatEt)) {
								cout << "Det er korrekt!" << endl << endl;
							}

							else if (!SvarEtEt.compare(ResultatEt)) {
								cout << "Det er korrekt!" << endl << endl;
							}

							else {
								cout << "Det er desværre ikke korrekt" << endl;
							}
						}

						//Kører spørgsmålet hvis det er inden for den valgte grænse
						if (TalA >= 75 and TalA <= 100) {

							cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
							cout << "I hvilket kvartal skete deres præstation?" << endl << endl;
							cin >> ResultatTo;

							cout << "A: Første kvartal" << endl;
							cout << "B: Andet kvartal" << endl;
							cout << "C: Tredje kvartal" << endl;
							cout << "D: Fjerde kvartal" << endl;

							if (!ResultatTo.compare(SvarTo)) {
								cout << "Det er korrekt!" << endl;

							}

							else if (!ResultatTo.compare(SvarToTo)) {
								cout << "Det er korrekt!" << endl;
							}

							else {
								cout << "Det er desværre ikke korrekt" << endl;
							}
						}
					}

					else if (!ResultatTo.compare(SvarToTo)) {
						cout << "Det er korrekt!" << endl;

						//vælger et nyt tal mellem 25 og 100
						TalA = rand() % 100 + 25;

						if (TalA >= 25 and TalA <= 100) {
							cout << "Twitch er en live streaming tjeneste, som blev opkøbt den 25 august 2014" << endl;
							cout << "Hvem opkøbte Twitch?" << endl << endl;
							cin >> ResultatEt;

							if (!SvarEtEt.compare(ResultatEt)) {
								cout << "Det er korrekt!" << endl << endl;

								//Kører spørgsmålet hvis det er inden for den valgte grænse
								if (TalA >= 75 and TalA <= 100) {

									cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
									cout << "I hvilket kvartal skete deres præstation?" << endl << endl;
									cin >> ResultatTo;

									cout << "A: Første kvartal" << endl;
									cout << "B: Andet kvartal" << endl;
									cout << "C: Tredje kvartal" << endl;
									cout << "D: Fjerde kvartal" << endl;

									if (!ResultatTo.compare(SvarTo)) {
										cout << "Det er korrekt!" << endl;

									}

									else if (!ResultatTo.compare(SvarToTo)) {
										cout << "Det er korrekt!" << endl;
									}

									else {
										cout << "Det er desværre ikke korrekt" << endl;
									}
								}
							}

							else if (!SvarEtEt.compare(ResultatEt)) {
								cout << "Det er korrekt!" << endl << endl;

							}

							else {
								cout << "Det er desværre ikke korrekt" << endl;
							}
						}
						//Kører spørgsmålet hvis det er inden for den valgte grænse
						if (TalA >= 75 and TalA <= 100) {

							cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
							cout << "I hvilket kvartal skete deres præstation?" << endl << endl;
							cin >> ResultatTo;

							cout << "A: Første kvartal" << endl;
							cout << "B: Andet kvartal" << endl;
							cout << "C: Tredje kvartal" << endl;
							cout << "D: Fjerde kvartal" << endl;

							if (!ResultatTo.compare(SvarTo)) {
								cout << "Det er korrekt!" << endl;

							}

							else if (!ResultatTo.compare(SvarToTo)) {
								cout << "Det er korrekt!" << endl;
							}

							else {
								cout << "Det er desværre ikke korrekt" << endl;
							}
						}
					}

					else {
						cout << "Det er desværre ikke korrekt" << endl;
					}
				}
			}

			else if (!ResultatTre.compare(SvarTreTo)) {
				cout << "Det er korrekt!" << endl;

				if (TalA >= 1 and TalA <= 24) {
					cout << "Twitch er en live streaming tjeneste, som blev opkøbt den 25 august 2014" << endl;
					cout << "Hvem opkøbte Twitch?" << endl << endl;
					cin >> ResultatEt;

					if (!SvarEtEt.compare(ResultatEt)) {
						cout << "Det er korrekt!" << endl << endl;
					}

					else if (!SvarEtEt.compare(ResultatEt)) {
						cout << "Det er korrekt!" << endl << endl;
					}

					else {
						cout << "Det er desværre ikke korrekt" << endl;
					}
				}
			}

			else {
				cout << "Det er desværre ikke korrekt" << endl;
			}
		}

		//Kører spørgsmålet hvis det er inden for den valgte grænse
		if (TalA >= 75 and TalA <= 100) {

			cout << "Twitter lavede for første gang nogensinde profit i 2017" << endl;
			cout << "I hvilket kvartal skete deres præstation?" << endl << endl;
			cin >> ResultatTo;

			cout << "A: Første kvartal" << endl;
			cout << "B: Andet kvartal" << endl;
			cout << "C: Tredje kvartal" << endl;
			cout << "D: Fjerde kvartal" << endl;

			if (!ResultatTo.compare(SvarTo)) {
				cout << "Det er korrekt!" << endl;

			}

			else if (!ResultatTo.compare(SvarToTo)) {
				cout << "Det er korrekt!" << endl;
			}

			else {
				cout << "Det er desværre ikke korrekt" << endl;
			}
		}

		if (TalA >= 25 and TalA <= 100) {
			cout << "Twitch er en live streaming tjeneste, som blev opkøbt den 25 august 2014" << endl;
			cout << "Hvem opkøbte Twitch?" << endl << endl;
			cin >> ResultatEt;

			if (!SvarEtEt.compare(ResultatEt)) {
				cout << "Det er korrekt!" << endl << endl;
			}

			else if (!SvarEtEt.compare(ResultatEt)) {
				cout << "Det er korrekt!" << endl << endl;
			}

			else {
				cout << "Det er desværre ikke korrekt" << endl;
			}
		}

		if (TalA >= 50 and TalA <= 100) {

			::cout << "I 2017 fusionerede Siemens Wind Power med et spansk firma" << endl;
			::cout << "Hvilket firma fusionerede de med?" << endl << endl;

			::cout << "A: Navarra" << endl;
			::cout << "B: Gamesa" << endl;
			::cout << "C: Acciona Energy" << endl;
			::cout << "D: Iberdrola" << endl;
			::cin >> ResultatTre;

			if (!ResultatTre.compare(SvarTre)) {
				::cout << "Det er korrekt!" << endl;
			}

			else if (!ResultatTre.compare(SvarTreTo)) {
				::cout << "Det er korrekt!" << endl;
			}

			else {
				::cout << "Det er desværre ikke korrekt" << endl;
			}
		}

	}

	cin.ignore();
	cin.get();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
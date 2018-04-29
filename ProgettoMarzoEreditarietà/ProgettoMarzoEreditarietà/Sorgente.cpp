#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include "Scritte.h"
#include "Poll.h"
#include "creaPoll.h"
#include "visualizzaPoll.h"

using namespace::std;

int main() {
	//variabili del main
	int Scelta;
	string Capo[1]{ "\n" };
	string nomepoll;
	string tag;
	string username;
	string password;
	int ii;
	bool login = false;
	/*string NomePoll, string Tag, bool Login*/


	do {                 // Inizio animazione del menu' (Notare che il programma termina solo con la scelta 4)
		cout << "\n\n";
		Sleep(500);
		Scritte s;
		s.cancelletti();
		cout << "\n";
		Sleep(500);
		s.parolaMenuPrincipale();
		Capo[1];
		Sleep(500);
		cout << "\n 1: ";
		s.parolaVisualizzaIPoll();
		Sleep(500);
		cout << "\n 2: ";
		s.parolaCreaUnPoll();
		Sleep(500);
		cout << "\n 3: ";
		s.parolaEsci();
		Sleep(500);
		cout << "\n";
		s.cancelletti();
		cout << "\n";
		cin >> Scelta;

		// Inizio delle scelte
		// scelta 1
		if (Scelta == 1) {
			Capo[1];
			s.cancelletti();
			Capo[1];
			visualizzaPoll v();
			v.guardaPoll();
			
		}
		else
			// Scelta 2: CREAZIONE DI POLL
			if (Scelta == 2) {
				do {
					cout << "\n Crea un poll";
					cout << "\n";
					creaPoll c();
					c.CreaPoll();
					cout << "\n Vuoi un altro poll? [1/0] ";
					cin >> ii;
				} while (ii == 1);
			}



		_getch();
	} while (Scelta != 3); // Scelta 3 = chiusura del programma

}
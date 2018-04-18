#include <iostream>
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include <Windows.h>
#include <conio.h>
#include "GestionePoll.h"
#include "Stringhe.h"

using namespace::std;

int main() {
	//variabili del main
	int Scelta;
	string Capo[1]{ "\n" };
	do {
		cout << "\n\n";
		Sleep(500);
		Stringhe s;
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
		s.parolaLogin();
		Sleep(500);
		cout << "\n 4: ";
		s.parolaEsci();
		Sleep(500);
		cout << "\n";
		s.cancelletti();
		cout << "\n";
		cin >> Scelta;

		if (Scelta == 1) {
			Capo[1];
			s.cancelletti();
			Capo[1];
		}
		else
			if (Scelta == 2) {
				cout << "\n Crea un poll (devi prima essere iscritto)";
				Poll crea;
		
				
			}
			else
				if (Scelta == 3) {
					cout << "\n Esegui il login o registrati";
				}

		_getch();
	} while (Scelta != 4);

}



//string cancelletti[25]{ "#","#", "#", "#", "#", "#", "#", "#", "#", "#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#", };
//string parolaMenuPrincipale[17]{ "M","e","n","u ","", "P","r","i","n","c","i","p","a","l","e:","        #" };
//string parolaVisualizzaIPoll[16]{ "V","i","s","u","a","l","i","z","z","a ","i ","p","o","l","l","   #" };
//string parolaCreaUnPoll[11]{ "C","r","e","a ","u", "n ","p","o","l","l","        #" };
//string parolaLogin[17]{ "L","o","g","i","n", "/","r","e","g","i","s","t","r","a","t","i","    #" };
//string parolaEsci[17]{ "E","s","c","i ","d", "a","l ","p","r","o","g","r","a","m","m","a","  #" };
//string parolaVisualizzo[23]{ "V","i","s","u","a", "l","i","z","z","o ","i ","p","o","l","l ","p","r","e","s","e","n","t","i " };

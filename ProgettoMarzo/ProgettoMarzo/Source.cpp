#include <iostream>
#include <conio.h>
#include <windows.h>
#include "GestionePoll.h"

using namespace::std;

int main() {
	//variabili del main
	int Scelta;
	string parolaMenu[4]{ "M","e","n","u" };
	string parolaMenuPrincipale[16]{"M","e","n","u","", "P","r","i","n","c","i","p","a","l","e" };
	string parolaVisualizzaIPoll[15]{ "V","i","s","u","a","l","i","z","z","a","i","p","o","l","l" }

	do {
		cout << "\n\n" ;
		Sleep(500);
		for (int i = 0; i < 16; i++) { cout << parolaMenuPrincipale[i]; Sleep(100); }
		Sleep(500);
		cout << "\n 1: Visualizza i poll ";
		Sleep(500);
		cout << "\n 2: Crea un poll";
		Sleep(500);
		cout << "\n 3: Login/registrati";
		Sleep(500);
		cout << "\n 4: Esci dal programma";
		cout << "\n ";
		cin >> Scelta;

		if (Scelta == 1) {
			cout << "\n Visualizzo i poll presenti";
			/*Poll Visualizza = new Poll (Login,Username,Password);*/
		}
		else
			if (Scelta == 2) {
				cout << "\n Crea un poll (devi prima essere iscritto)";
			}
			else
				if (Scelta == 3) {
					cout << "\n Esegui il login o registrati";
				}
		
		_getch();
	} while (Scelta != 4);


	//switch (Scelta)
	//{
	//case (1):
	//	cout << "\n Visualizzo i dati... ";
	//	break;
	//case (2): 
	//	poll b;
	//	b.pollDefault();
	//	break;
	//case (3):
	//	poll p;
	//	p.nomePoll();
	//	break;
	//		
	//}


	//void inserisci(string Dato, char Risp);


}


// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
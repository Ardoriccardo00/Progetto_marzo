#include <iostream>
#include <conio.h>
#include <windows.h>
#include "GestionePoll.h"

using namespace::std;

int main() {
	//variabili del main
	int Scelta;
	string Capo[1]{ "\n" };
	string cancelletti[25]{ "#","#", "#", "#", "#", "#", "#", "#", "#", "#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#", };
	string parolaMenuPrincipale[17]{ "M","e","n","u ","", "P","r","i","n","c","i","p","a","l","e:","        #" };
	string parolaVisualizzaIPoll[16]{ "V","i","s","u","a","l","i","z","z","a ","i ","p","o","l","l","   #" };
	string parolaCreaUnPoll[11]{ "C","r","e","a ","u", "n ","p","o","l","l","        #" };
	string parolaLogin[17]{ "L","o","g","i","n", "/","r","e","g","i","s","t","r","a","t","i","    #" };
	string parolaEsci[17]{ "E","s","c","i ","d", "a","l ","p","r","o","g","r","a","m","m","a","  #" };
	string parolaVisualizzo[23]{ "V","i","s","u","a", "l","i","z","z","o ","i ","p","o","l","l ","p","r","e","s","e","n","t","i " };
	do {
		cout << "\n\n";
		Sleep(500);
		for (int i = 0; i < 25; i++) { cout << cancelletti[i]; Sleep(50); }
		cout << "\n";
		Sleep(500);
		for (int i = 0; i < 17; i++) { cout << parolaMenuPrincipale[i]; Sleep(50); }
		Capo[1];
		Sleep(500);
		cout << "\n 1: ";
		for (int i = 0; i < 16; i++) { cout << parolaVisualizzaIPoll[i]; Sleep(50); }
		Sleep(500);
		cout << "\n 2: ";
		for (int i = 0; i < 11; i++) { cout << parolaCreaUnPoll[i]; Sleep(50); }
		Sleep(500);
		cout << "\n 3: ";
		for (int i = 0; i < 17; i++) { cout << parolaLogin[i]; Sleep(50); }
		Sleep(500);
		cout << "\n 4: ";
		for (int i = 0; i < 17; i++) { cout << parolaEsci[i]; Sleep(50); }
		Sleep(500);
		cout << "\n";
		for (int i = 0; i < 25; i++) { cout << cancelletti[i]; Sleep(50); }
		cout << "\n";
		cin >> Scelta;

		if (Scelta == 1) {
			Capo[1];
			for (int i = 0; i < 25; i++) { cout << cancelletti[i]; Sleep(50); }
			Capo[1];
			for (int i = 0; i < 23; i++) { cout << parolaVisualizzo[i]; Sleep(50); }
			Capo[1];
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

}
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





// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
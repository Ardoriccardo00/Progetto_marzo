//PROGRAMMA VECCHIO
#include <iostream>
#include <conio.h>
#include "Poll.h"
#include <windows.h>

using namespace::std;

int main() {
	string Dato;
	char Risp;
	int Scelta;
	string Nome;
	Poll p;

	do {
		Sleep(500);
		cout << "\n\n Cosa vuoi fare?";
		Sleep(500);
		cout << "\n 1: visualizzare i dati ";
		Sleep(500);
		cout << "\n 2: visualizzare il poll di default";
		Sleep(500);
		cout << "\n 3: creare un poll";
		cout << "\n ";
		cin >> Scelta;

		if (Scelta == 1) { cout << "\n Visualizzo i dati"; }
		else
			if (Scelta == 2) {
				Poll p = new Poll;
				p.pollDefault();

			}
			else
				if (Scelta == 3) {
					
					p.nomePoll();
				}
		_getch();
	} while (true);
	
	
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
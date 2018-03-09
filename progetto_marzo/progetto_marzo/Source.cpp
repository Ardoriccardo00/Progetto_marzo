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

		Sleep(500);
		cout << "\n Cosa vuoi fare?";
		Sleep(500);
		cout << "\n 1: visualizzare i dati ";
		Sleep(500);
		cout << "\n 2: visualizzare il poll di default";
		Sleep(500);
		cout << "\n 3: creare un poll";
		cout << "\n ";
		cin >> Scelta;

		if (Scelta == 1) {cout << "\n Visualizzo i dati";}
		else
		if (Scelta == 2) {
			poll b;
			b.pollDefault();

		}
		else
		if (Scelta == 3) {
			poll p;
			p.nomePoll();
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

		_getch();
}


// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
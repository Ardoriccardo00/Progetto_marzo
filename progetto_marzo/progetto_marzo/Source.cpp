#include <iostream>
#include <conio.h>
#include "Poll.h"
#include <windows.h>

using namespace::std;

int main() {
	string Dato;
	char Risp;
	int Scelta;

		Sleep(500);
		cout << "\n Cosa vuoi fare?";
		Sleep(500);
		cout << "\n 1: visualizzare i dati ";
		Sleep(500);
		cout << "\n 2: inserire un dato ";
		Sleep(500);
		cout << "\n 3: visualizzare il poll di default";
		Sleep(500);
		cout << "\n 4: creare un poll";
		cin >> Scelta;
	
	
		switch (Scelta)
	{
	case (1): cout << "\n Visualizzo i dati... ";
		break;
	case (2): cout << "\n Inserisci un dato... ";
		break;
	case (3): cout << "\n Visualizzo il poll di default";
		void pollDefault();
		break;
	case (4): cout << "\n Dai un nome al tuo nuovo poll";
		string nomepoll();
	}


	void inserisci(string Dato, char Risp);

		_getch();
}


// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
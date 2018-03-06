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
		cin >> Scelta;
	
	
		switch (Scelta)
	{
	case (1): cout << "\n Visualizzo i dati... ";
		break;
	case (2): cout << "\n Inserisci un dato... ";
		break;
	}


	void inserisci(string Dato, char Risp);

		_getch();
}


// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
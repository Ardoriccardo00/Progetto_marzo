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
	
	
		switch (Scelta)
	{
	case (1): cout << "\n Visualizzo i dati... ";
		break;
	case (2): cout << "\n Visualizzo il poll di default";
		void pollDefault();
		break;
	case (3): 
		//string s= nomePoll();
		//void nomePoll();
		cout << "inserisci nome poll";
		string nomePoll();
		cout << "\n il nome del poll è";
		cout << "\n";
		cout << Nome;
	}


	void inserisci(string Dato, char Risp);

		_getch();
}


// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
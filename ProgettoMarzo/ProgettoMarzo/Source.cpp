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
#include "Scritte.h"
#include "Login.h"
#include "Register.h"

using namespace::std;

int main() {
	//variabili del main
	int Scelta;
	string Capo[1]{ "\n" };
	string nomepoll;
	string tag;
	string username;
	string password;
	bool login = false;
	/*string NomePoll, string Tag, bool Login*/


	do {
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
				Poll p;
				p.CreaPoll(login);

			}
			else
				if (Scelta == 3) 
				{
					int a;
					Login l1;

					cout << "Hai già un profilo o vuoi registrarti? (1/0) \t";
					cin >> a;

				if (a=0) {
					Login l1;
					bool status = l1.LoginCorretto();
					if (!status)
					{
						cout << "\n\tDati Inseriti Errati\n";

						_getch();
					}
					else
					{
						cout << "\n\t Benvenuto! " << l1.username << " !\n";
						_getch();
					}
				}
				else if (a = 1) {
					
					Register l2;
					bool statur = l2.NewRegister();
					return 0;
				};
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

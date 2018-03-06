#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace::std;

class poll {
private:
	char risp;
public:
	string dato;
	void inserisci(string dato, char risp);
	void inserisci();

};
void poll::inserisci() { };
void poll::inserisci(string dato, char risp) {
	do {
		cout << "\n Inserisci il testo";
		cin >> dato;

		cout << "\n Vuoi inserire un altro dato? [S/N] ";
		cin >> risp;
	} while (risp == 'S' || risp == 's');

};
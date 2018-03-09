#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
using namespace::std;

class poll {
private:
	char risp;
	int osta;
	int lol = 1;
public:
	std::vector<string> dati;
	string nome;
	void inserisci();
	void pollDefault();
	void nomePoll();
	string nomeDato();
	void inserisciDefault();

};


// Funzione che ti permette di visualizzare il poll di default (poll di test)
void poll::pollDefault() {
	cout << "\n Visualizzazione poll di default";
	string in;
	in == "default";
	nome = in;

	inserisciDefault();
};

// Seconda fase del poll di default
void poll::inserisciDefault() {
	do {
		string dato;
		cout << "\n Inserisci il testo ";
		dato == "dato1";
		dati.push_back(dato);
		cout << "\n Vuoi inserire un altro dato? [S/N] ";
		char risp;
		risp = 'S';
	} while (risp == 'N' || risp == 'n');
};

// Funzione che ti permette di dare un nome ad un nuovo poll
void poll::nomePoll() {
	cout << "\n Dai un nome al tuo nuovo poll ";
	string in;
	cin >> in;
	nome = in;

	inserisci();

};

// Funzione che ti permettere di inserire dati nel poll
void poll::inserisci() {
	do {
		string dato;
		cout << "\n Inserisci il testo ";
		cin >> dato;
		dati.push_back(dato);
		cout << "\n Vuoi inserire un altro dato? [S/N] ";
		char risp;
		cin >> risp;
		if (risp == 'N' || risp == 'n') { osta = lol; }
	} while (osta == lol);

};



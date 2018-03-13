#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
using namespace::std;

class titoloPoll {
private:
	char risp;
	string dato;
public:
	std::vector<string> dati;
	string nome
	void nomePoll();
};

// Funzione che ti permette di dare un nome ad un nuovo poll
void titoloPoll::nomePoll() {
	cout << "\n Dai un nome al tuo nuovo poll ";
	string in;
	cin >> in;
	nome = in;
};



};

class creaPoll : public titoloPoll {
private:
	char risp;
	string dato;
public:
	void inserisci();

};
// Funzione che ti permettere di inserire dati nel poll
void poll::inserisci() {
	do {
		cout << "\n Inserisci il testo ";
		cin >> dato;
		dati.push_back(dato);
		cout << "\n Vuoi inserire un altro dato? [S/N] ";
		char risp;
		cin >> risp;
	} while (risp == 'S' || risp == 's');

class DefaultPoll {};
//// Funzione che ti permette di visualizzare il poll di default (poll di test)
//void poll::pollDefault() {
//	cout << "\n Visualizzazione poll di default";
//	string in;
//	in == "default";
//	nome = in;
//
//	inserisciDefault();
//};
//
//// Seconda fase del poll di default
//void poll::inserisciDefault() {
//	do {
//		string dato;
//		cout << "\n Inserisci il testo ";
//		dato == "dato1";
//		dati.push_back(dato);
//		cout << "\n Vuoi inserire un altro dato? [S/N] ";
//		char risp;
//		risp = 'S';
//	} while (risp == 'N' || risp == 'n');
//};



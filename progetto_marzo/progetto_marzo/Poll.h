#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
using namespace::std;

class Poll {
private:
	char risp;
	string dato;
public:
	Poll() {};
	Poll(char a, string b) { risp = a; dato = b; };
	std::vector<string> dati;
	string nome;
	void setRisp(char c) { risp = c; }
	void setM(string d) { dato = d; }
	char getRisp() { return risp; };
	string getDato() { return dato; };

	// Funzione che ti permette di dare un nome ad un nuovo poll
	void nomePoll() {
		cout << "\n Dai un nome al tuo nuovo poll ";
		string in;
		cin >> in;
		nome = in;
	};

	// Funzione che ti permettere di inserire dati nel poll
	void inserisci() {
		do {
			cout << "\n Inserisci il testo ";
			cin >> dato;
			dati.push_back(dato);
			cout << "\n Vuoi inserire un altro dato? [S/N] ";
			char risp;
			cin >> risp;
		} while (risp == 'S' || risp == 's');

};





//class DefaultPoll {};
// Funzione che ti permette di visualizzare il poll di default (poll di test)
//void poll::pollDefault() {
//	cout << "\n Visualizzazione poll di default";
//	string in;
//	in == "default";
//	nome = in;
//
//	inserisciDefault();
//};
//
// Seconda fase del poll di default
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



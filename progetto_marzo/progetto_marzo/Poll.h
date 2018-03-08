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
public:
	std::vector<string> dati;
	string nome;
	void inserisci();
	void pollDefault(string nome, string nomeDato);
	void nomePoll();
	string nomeDato();

};
//void poll::inserisci() { };
void poll::inserisci() {
	do {
		string dato;
		cout << "\n Inserisci il testo ";
		cin >> dato;
		dati.push_back(dato);
		cout << "\n Vuoi inserire un altro dato? [S/N] ";
		char risp;
		cin >> risp;
	} while (risp == 'S' || risp == 's');

};

void pollDefault(string nome, string nomeDato) {
	//string nomeDato = "ciao";
	//cout << nomeDato;
};

void poll::nomePoll() {
	cout << "\n Dai un nome al tuo nuovo poll ";
	string in;
	cin >> in;
	nome = in;

	inserisci();

};
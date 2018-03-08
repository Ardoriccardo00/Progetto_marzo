#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
using namespace::std;

class poll {
private:
	char risp;
public:
	string dato;
	string nome;
	void inserisci(string dato, char risp);
	void inserisci();
	void pollDefault(string nome, string nomeDato);
	string nomePoll(string nome);
	string nomeDato();

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

void pollDefault(string nome, string nomeDato) {
	//string nomeDato = "ciao";
	//cout << nomeDato;
};

string poll::nomePoll(string nome) {
	cout << "\n Dai un nome al tuo nuovo poll";
	string in;
	cin >> in;
	nome = in;
	inserisci();
};
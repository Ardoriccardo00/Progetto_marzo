#include <iostream>
using namespace::std;

void main() {
	string dato;
	char sn;
	char chiudi;

	try {
		cout << "vuoi inserire un dato? [S/N] ";
		cin >> sn;
		if (sn == 's' || 'S' || 'n' || 'N') { cout << "ok"; }
		else { throw "Input errato"; }
	}
	catch (string) { "Inserisci[S, s oppure N, n]"; }
	cin >> chiudi;
}
#include <iostream>
using namespace::std;

int main() {
	string dato;
	char sn;
	char chiudi;

	
	do {  
		                                                            
		cout << "\n Inserisci [S, s oppure N, n]";  
		cin >> sn;
		
		
	} while (sn != 's' || sn != 'S' || sn != 'n' || sn != 'N');
	cout << "\n corretto";                                                      
	    cin >> chiudi;
}


// sn == 's' || sn == 'S' || sn == 'n' || sn == 'N'
// sn != 's' || sn != 'S' || sn != 'n' || sn != 'N'
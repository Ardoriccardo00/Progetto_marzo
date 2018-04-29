#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include <Windows.h>
using namespace::std;

class Scritte {
public:
	void cancelletti() { string cancelletti[25]{ "#","#", "#", "#", "#", "#", "#", "#", "#", "#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#", }; for (int i = 0; i < 25; i++) { cout << cancelletti[i]; Sleep(50); } }
	void parolaMenuPrincipale() { string parolaMenuPrincipale[17]{ "M","e","n","u ","", "P","r","i","n","c","i","p","a","l","e:","        #" }; for (int i = 0; i < 17; i++) { cout << parolaMenuPrincipale[i]; Sleep(50); } }
	void parolaVisualizzaIPoll() { string parolaVisualizzaIPoll[16]{ "V","i","s","u","a","l","i","z","z","a ","i ","p","o","l","l","   #" }; for (int i = 0; i < 16; i++) { cout << parolaVisualizzaIPoll[i]; Sleep(50); } }
	void parolaCreaUnPoll() { string parolaCreaUnPoll[11]{ "C","r","e","a ","u", "n ","p","o","l","l","        #" }; for (int i = 0; i < 11; i++) { cout << parolaCreaUnPoll[i]; Sleep(50); } }
	void parolaLogin() { string parolaLogin[17]{ "L","o","g","i","n", "/","r","e","g","i","s","t","r","a","t","i","    #" }; for (int i = 0; i < 17; i++) { cout << parolaLogin[i]; Sleep(50); } }
	void parolaEsci() { string parolaEsci[17]{ "E","s","c","i ","d", "a","l ","p","r","o","g","r","a","m","m","a","  #" }; for (int i = 0; i < 17; i++) { cout << parolaEsci[i]; Sleep(50); } }
	void parolaVisualizzo() { string parolaVisualizzo[23]{ "V","i","s","u","a", "l","i","z","z","o ","i ","p","o","l","l ","p","r","e","s","e","n","t","i " }; for (int i = 0; i < 23; i++) { cout << parolaVisualizzo[i]; Sleep(50); } }
	void parolaloginRegistrati() { string loginRegistrati[34]{ "V","u","o","i ","i","s","c","r","i","v","e","r","t","i ","[","1","] ", "o ","f","a","r","e ","i","l ","l","o","g","i","n","? ","[","2","] " }; for (int i = 0; i < 23; i++) { cout << loginRegistrati[i]; Sleep(50); } }
	void parolaUsername() { string parolaUsername[19]{ "I","n","s","e","r","i","s","c","i ","u","n ","u","s","e","r","n","a","m","e " }; for (int i = 0; i < 23; i++) { cout << parolaUsername[i]; Sleep(50); } }
	void parolaPassword() { string parolaPassword[20]{ "I","n","s","e","r","i","s","c","i ","u","n","a ","p","a","s","s","w","o","r", "d" }; for (int i = 0; i < 23; i++) { cout << parolaPassword[i]; Sleep(50); } }
	void parolaCreato() { string parolaCreato[13]{ "A","c","c","o","u","n","t ","c","r","e","a","t","o " }; for (int i = 0; i < 23; i++) { cout << parolaCreato[i]; Sleep(50); } }
};

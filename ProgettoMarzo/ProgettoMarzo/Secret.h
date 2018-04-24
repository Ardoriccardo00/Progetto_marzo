#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include <Windows.h>
using namespace::std;

class Secret {
public:
	void cancelletti();
	void scritta();
	void uno();
};

	void Secret::cancelletti() {
		string cancelletti[79]{ "#","#", "#", "#", "#", "#", "#", "#", "#", "#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#", "#", "#", "#", "#", "#", "#", "#", "#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"};
		for (int i = 0; i < 79; i++) { cout << cancelletti[i]; Sleep(10); }
	}

	void Secret::uno() {
		string cancelletti[79]{ "#","#", "#", "#", "#", "0", "#", "#", "#", "#","0","#","#","#","#","0","0","0","0","0","0","#","#","#","#","#","#","#","0","0","0","0","#","#","#","#","#","#","#","#","#","0", "0", "0", "0", "#", "#", "#", "#", "#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#" };
		for (int i = 0; i < 79; i++) { cout << cancelletti[i]; Sleep(10); }
	}
	void Secret::scritta() {
		cancelletti();
		Sleep(10);
		cancelletti();
		Sleep(10);
		cancelletti();
		Sleep(10);
		cancelletti();
	}
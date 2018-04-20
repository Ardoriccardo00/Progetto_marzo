#include <iostream>
#include <string>
#include "Register.h"

using namespace std;

class Login
{
public:
	string username, password;
	Login() {
	
		username = "";
		password = "";

	};
	bool LoginCorretto();
};

bool Login::LoginCorretto() {

	string usernamec = "alessio"; string passwordc = "12345";
	cout << "Inserisci l' username \t";
	cin >> username;
	cout << "Inserisci la password \t";
	cin >> password;

	if (username == usernamec && password == passwordc) {

		return true;
	}
	else {
		return false;
	}
};
	


#pragma once
#include <iostream>
#include <string>

class Register
{
public:
	
	string newusername, newpassword;

	Register() {

		newusername = "";
		newpassword = "";

	};

	bool NewRegister();
};
	bool Register::NewRegister() {
		
		cout << "\n Creazione di un nuovo profilo \n";
		cout << "Inserisci l' username \t";
		cin >> newusername;
		cout << "Inserisci la password \t";
		cin >> newpassword;

		return true;
};


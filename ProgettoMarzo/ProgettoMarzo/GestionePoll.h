#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
using namespace::std;

class Poll{
private:

	bool _login;
	string _username;
	string _password;

public:
	Poll() {};
	Poll(bool PLogin, string PUsername, string PPassword) { _login = PLogin; _username = PUsername; _password = PPassword; };
	void set_login(bool Login) { _login = Login; }
	void set_username(string Username) { _username = Username; }
	void set_password(string Password) { _password = Password; }
	int get_login() { return _login; };
	int get_username() { return _username; }
	int get_password() { return _password; }

};
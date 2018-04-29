#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include <time.h>
#include "Poll.h"
using namespace::std;

class visualizzaPoll: public Poll{
private:

	bool _login = false;
	string _username;
	string _password;
	string _tag;
	string _nomePoll;
	vector<string> _scelte;
	vector <string> _voti;

	visualizzaPoll() {};

	void guardaPoll() {}

};

void visualizzaPoll::guardaPoll()
{
	cout << "\nEcco il poll creato ";
	cout << "\n";
	cout << _nomePoll;
	cout << _tag;

}
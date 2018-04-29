#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include <time.h>
#include "Poll.h"
using namespace::std;

class creaPoll : public Poll {
private:

	bool _login = false;
	string _username;
	string _password;
	string _tag;
	string _nomePoll;
	vector<string> _scelte;
	vector <string> _voti;
public:
	creaPoll(string NomePoll, string Tag, vector <string> Scelte) {

		_nomePoll = NomePoll;
		_tag = Tag;

		for (int i = 0; i < Scelte.size(); i++)
		{
			_scelte.push_back(Scelte[i]);
		}
	};
	
	void costruisciPoll();
};

void creaPoll::costruisciPoll()
{
	vector<string>scelte;
	int aa = 1;
	while (aa == 1) {
		string str;
		cout << "dammi una scelta" << endl;
		cin >> str;
		scelte.push_back(str);
		cout << "vuoi inserire ancora?(1/0)" << endl;
		cin >> aa;
	}
	cout << "\nInserisci il nome ";
	cout << "\n";
	string NomePoll, Tag;
	cin >> NomePoll;
	cout << "\nInserisci il tag ";
	cout << "\n";
	cin >> Tag;
	creaPoll p(NomePoll, Tag, scelte);
	_nomePoll = NomePoll;
	_tag = Tag;
	cout << "\n Vuoi visualizzare il poll? [1/0] ";
	int dd;
	cin >> dd;
	if (dd == 1) {
		cout << "\n";
		cout << NomePoll;
		cout << "\n";
		cout << Tag;
	}

}
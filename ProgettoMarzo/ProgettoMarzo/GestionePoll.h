#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
#include "Stringhe.h"
using namespace::std;

class Poll {
private:

	bool _login = false;
	string _username;
	string _password;
	string _tag;
	string _nomePoll;
	vector<string> _scelte;
	vector <string> _voti;

public:
	Poll() {};
	Poll(bool PLogin, string PTag, string PNomePoll, vector <string>) {};
	Poll(bool PLogin, string PUsername, string PPassword, string PTag, string PNomePoll, vector<string> PScelte, vector<string> PVoti)
	{
		_login = PLogin;
		_username = PUsername;
		_password = PPassword;
		_tag = PTag;
		_nomePoll = PNomePoll;
		for (int i = 0; i < PScelte.size(); i++) { _scelte[i] = PScelte[i]; }
		for (int j = 0; j < PVoti.size(); j++) { _voti[j] = PVoti[j]; }
	};
	//metodi get e set
	void set_login(bool Login) { _login = Login; }
	void set_username(string Username) { _username = Username; }
	void set_password(string Password) { _password = Password; }
	void set_tag(string Tag) { _tag = Tag; }
	void set_nomePoll(string NomePoll) { _nomePoll = NomePoll; }
	void set_scelte(vector<string> Scelte) { for (int i = 0; i < Scelte.size(); i++) { _scelte[i] = Scelte[i]; } }
	void set_voti(vector<string> Voti) { for (int i = 0; i < Voti.size(); i++) { _voti[i] = Voti[i]; } }

	bool get_login() { return _login; };
	string get_username() { return _username; }
	string get_password() { return _password; }
	string get_tag() { return _tag; }
	string get_nomePoll() { return _nomePoll; }
	vector<string> get_scelte() { return _scelte; }
	vector<string> get_voti() { return _voti; }
	Poll(string NomePoll,string Tag, vector <string> Scelte) {

		_nomePoll = NomePoll;
		_tag = Tag;

		for(int i = 0; i < Scelte.size(); i++)
		{
			Scelte.push_back(_scelte[i]);
		}
	};

	void CreaPoll(string NomePoll,string Tag, bool Login ) 
	{

		if (Login == false) { Sleep(500); cout << "\n Per creare un poll ti devi prima iscrivere "; }
		else
		{

			vector<string>scelte;
			char s;
			do{
				string str;
				cout << "dammi una scelta" << endl;
				cin >> str;
				scelte.push_back(str);
				cout << "vuoi inserire ancora?(s/n)" << endl;
				cin >> s;

				if(s= 's' || 'S'){}

				else { cout << "Errore"; return; }

			} while (s == 's' || 'S');
			
			Sleep(500);
			cout << "\nInserisci il nome del poll, il tag e le scelte";
			Poll nomepoll(NomePoll, Tag, scelte);

		}
	}
	Poll(string Username, string Password, bool Login) {
		_username = Username;
		_password = Password;
		_login = Login;
	}
	void login(string Username, string Password, bool Login) 
	{
		int scelta;
		Stringhe s;
		s.parolaLogin();
		cin >> scelta;

		if (scelta == 1) {
			cout << "\n";
			s.parolaUsername(); cout << "\n";
			cin >> Username;
			s.parolaPassword(); cout << "\n";
			cin >> Password;
			s.parolaCreato(); cout << "\n";
			Login = true;
		}
	}

};
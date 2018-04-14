#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <new>
#include <vector>
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
	Poll(string NomePoll,string Tag, vector <string> Scelte) {};

	void CreaPoll(string NomePoll,string Tag, bool Login ) 
	{

		if (Login == false) { Sleep(500); cout << "\n Per creare un poll ti devi prima iscrivere "; }
		else
		{
			//Sleep(500);
			//cout << "\nInserisci il nome del poll... ";
			//Sleep(500);
			//cin >> NomePoll;
			//Sleep(500);
			//cout << "\nInserisci il tag per il poll ";
			//Sleep(500);

			vector<Poll>poll;
			Sleep(500);
			cout << "\nInserisci il nome del poll, il tag e le scelte";
			Poll nomepoll("poll1", Tag);

		}
	}

	void AddVoto() {}

};
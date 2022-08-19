#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#pragma once


class User
{
protected:
	string surname, name, patronymiñ, adress, telephone, login, password;
	bool guestStatus; 	// 1 - àäìèí, 0 - ãîñòü
public:
	//User() {};
	User() : surname{ "-" }, name{ "-" }, patronymiñ{ "-" }, adress{ "-" }, telephone{ "-" }, login{ "-" }, password{ 0 }, guestStatus{ 0 } {};
	
	// àíêåòà äëÿ ğåãèñòğàöèè
	static User questionare() {
		//string surname, name, patronymiñ, adress, telephone, login, password;
		User user;
		cout << "Login:		";
		cin >> user.login;
		cout << "Password:		";
		cin >> user.password;
		cout << "Surname:	";
		cin >> user.surname;
		cout << "Name:	";
		cin >> user.name;
		cout << "Patronymiñ:	";
		cin >> user.patronymiñ;
		cout << "Adress:	";
		cin >> user.adress;
		cout << "Telephone:		";
		cin >> user.telephone;
		return user;
	}

	//äîáàâëåíèå ïîëüçîâàòåëÿ â ôàéë
	/*static void saveData(User user) {
		ofstream dataOut;
		dataOut.open("User data.txt", ofstream::app);
		if (!dataOut.is_open()) {
			cout << "File opening error!";
		}
		else {
			dataOut.write((char*)&user, sizeof(User));
		}
		dataOut.close();
	}*/

	string getLogin() {
		return login;
	}

	void setLogin(string newLogin) {
		login = newLogin;
	}

	void print(User user) {
		//óäàëèòü ëîãèí è ïàğîëü èç âûâîäà
		cout << "Login:		" << user.login;
		cout << "Password:		" << user.password;
		cout << "Surname:	"<< user.surname;
		cout << "Name:	"<< user.name;
		cout << "Patronymiñ:	"<< user.patronymiñ;
		cout << "Adress:	"<< user.adress;
		cout << "Telephone:		"<< user.telephone;
	}
	
};






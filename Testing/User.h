#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#pragma once


class User
{
protected:
	string surname, name, patronymi�, adress, telephone, login, password;
	bool guestStatus; 	// 1 - �����, 0 - �����
public:
	//User() {};
	User() : surname{ "-" }, name{ "-" }, patronymi�{ "-" }, adress{ "-" }, telephone{ "-" }, login{ "-" }, password{ 0 }, guestStatus{ 0 } {};
	
	// ������ ��� �����������
	static User questionare() {
		//string surname, name, patronymi�, adress, telephone, login, password;
		User user;
		cout << "Login:		";
		cin >> user.login;
		cout << "Password:		";
		cin >> user.password;
		cout << "Surname:	";
		cin >> user.surname;
		cout << "Name:	";
		cin >> user.name;
		cout << "Patronymi�:	";
		cin >> user.patronymi�;
		cout << "Adress:	";
		cin >> user.adress;
		cout << "Telephone:		";
		cin >> user.telephone;
		return user;
	}

	//���������� ������������ � ����
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
		//������� ����� � ������ �� ������
		cout << "Login:		" << user.login;
		cout << "Password:		" << user.password;
		cout << "Surname:	"<< user.surname;
		cout << "Name:	"<< user.name;
		cout << "Patronymi�:	"<< user.patronymi�;
		cout << "Adress:	"<< user.adress;
		cout << "Telephone:		"<< user.telephone;
	}
	
};






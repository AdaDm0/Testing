#include "User.h"
#include <conio.h>
#pragma once

class Menu
{
public:
	User registration() {
		string surname, name, patronymi�, adress, telephone, login, password;
		cout << "Surname:	";
		cin >> surname;
		cout << "Name:	";
		cin >> name;
		cout << "Patronymi�:	";
		cin >> patronymi�;
		cout << "Adress:	";
		cin >> adress;
		cout << "Telephone:		";
		cin >> telephone;
		cout << "Login:		";
		cin >> login;
		cout << "Password:		";
		cin >> password;
		//cout << "�ou have successfully registered!" << endl << endl;

	}
	
	
	static void menu() {
		cout << "ENTRANCE" << endl;
		cout << "_____________________" << endl;
		cout << "Choose: 1 - for login; 2 - for registration" << endl;  // 1=49.2=50
		int c = _getche();
		cout << endl;
		switch (c) {
			//���� ����� 1 - ����
			case 49:

			// ���� �����  2 - �����������
			case 50:
				
				
		}
			

	}
};


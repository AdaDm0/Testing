#include "User.h"
#include <conio.h>
#pragma once

class Menu
{
public:
	User registration() {
		string surname, name, patronymiñ, adress, telephone, login, password;
		cout << "Surname:	";
		cin >> surname;
		cout << "Name:	";
		cin >> name;
		cout << "Patronymiñ:	";
		cin >> patronymiñ;
		cout << "Adress:	";
		cin >> adress;
		cout << "Telephone:		";
		cin >> telephone;
		cout << "Login:		";
		cin >> login;
		cout << "Password:		";
		cin >> password;
		//cout << "Íou have successfully registered!" << endl << endl;

	}
	
	
	static void menu() {
		cout << "ENTRANCE" << endl;
		cout << "_____________________" << endl;
		cout << "Choose: 1 - for login; 2 - for registration" << endl;  // 1=49.2=50
		int c = _getche();
		cout << endl;
		switch (c) {
			//åñëè ââåëè 1 - âõîä
			case 49:

			// åñëè ââåëè  2 - ðåãèñòðàöèÿ
			case 50:
				
				
		}
			

	}
};


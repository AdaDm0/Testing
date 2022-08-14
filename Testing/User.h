#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#pragma once


class User
{
protected:
	string surname, name, patronymiс, adress, telephone, login, password;
	bool guestStatus; 	// 1 - админ, 0 - гость
public:
	//User() {};
	User() : surname{ "-" }, name{ "-" }, patronymiс{ "-" }, adress{ "-" }, telephone{ "-" }, login{ "-" }, password{ 0 }, guestStatus{ 0 } {};
	
	// анкета для регистрации
	static User questionare() {
		//string surname, name, patronymiс, adress, telephone, login, password;
		User user;
		cout << "Surname:	";
		cin >> user.surname;
		cout << "Name:	";
		cin >> user.name;
		cout << "Patronymiс:	";
		cin >> user.patronymiс;
		cout << "Adress:	";
		cin >> user.adress;
		cout << "Telephone:		";
		cin >> user.telephone;
		cout << "Login:		";
		cin >> user.login;
		cout << "Password:		";
		cin >> user.password;
		return user;
	}

	static void saveData(User user) {
		//FILE* users = fopen("Users.txt", "a+");
		//if (!users) {
		//	exit(0);
		//}
		//else {
		//	fwrite(/*"запистаь сюда адрес что записываем"*/User &a, sizeof(char), 1, users);
		//	fclose(users);
		//}

		//добавление пользователя в файл
		ofstream dataOut;
		dataOut.open("User data.txt", ofstream::app);
		if (!dataOut.is_open()) {
			cout << "File opening error!";
		}
		else {
			dataOut.write((char*)&user, sizeof(User));
		}
		dataOut.close();
	}


	// создать метод, который все переменные превращает в строку, для передачи в database
};






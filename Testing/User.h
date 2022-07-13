#include <iostream>
#include <string>
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
	


	// создать метод, который все переменные превращает в строку, для передачи в database
};






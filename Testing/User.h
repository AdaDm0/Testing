#include <iostream>
#include <string>
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
	


	// ������� �����, ������� ��� ���������� ���������� � ������, ��� �������� � database
};






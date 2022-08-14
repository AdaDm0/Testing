#define __CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include "User.h"
using namespace std;
#pragma once


//класс для обработки данных

class Database
{
public:
	//создание всех необходимых файлов при установке программы
	static void saveData(User user=User::questionare()) {
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
		dataOut.open("User data.txt", ofstream:: app);
		if (!dataOut.is_open()) {
			cout << "File opening error!";
		} 
		else {
			dataOut.write((char*)&user, sizeof(User));
		}
		dataOut.close();
	}
	
	
		//проверка логина на совпадение
	bool isUnique(string login) {
		ofstream dataOut;
		dataOut.open("User data.txt", ofstream::app);
		if (!dataOut.is_open()) {
			cout << "File opening error!";
		}
		else {
			dataOut.
		}
		dataOut.close();



	}
};


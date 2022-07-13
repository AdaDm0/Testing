#define __CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;
#pragma once


//класс для обработки данных

class Database
{
public:
	//создание всех необходимых файлов при установке программы
	void init() {
		FILE* users = fopen("Users.txt", "a+");
		if (!users) {
			exit(0);
		}
		else {
			fwrite(/*"запистаь сюда адрес что записываем"*/User &a, sizeof(char), 1, users);
			fclose(users);
		}
		


		 
	}
	
	
		//проверка логина на совпадение
	bool isUnique(string login) {




	}
};


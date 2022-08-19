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
private:
	int key = 4;
public:
	int getKey() {
		return key;
	}
	
	//добавление пользователя в файл
	static void saveData(User user) {
		//зашифровка логина
		user.setLogin(encription(user.getLogin()))
		ofstream dataOut;
		dataOut.open("User data.txt", ofstream:: app);
		if (!dataOut.is_open()) {
			cout << "File opening error!";
		} 
		else {
			cout << "File is open.\n";
			dataOut.write((char*)&user, sizeof(User));
			dataOut << "\n";
		}
		dataOut.close();
	}
	
	
	//проверка логина на уникальность
	static bool isUnique(string login) {
		string cryptoLogin = encription(login);
		bool res;
		//работа с файлом
		ifstream dataIn;
		dataIn.open("User data.txt", ofstream::app);
		if (!dataIn.is_open()) {
			cout << "File opening error!";
		}
		else {
			cout << "File is open.\n";
			string fileString = " ";
			while (!dataIn.eof()) {
				//fileString = getline(dataIn);
				dataIn >> fileString;
				//если логин уже есть в файле
				if ( cryptoLogin == fileString) {
					res = 0;
				}
				else {
					res = 1;
				}
			}
		}
		dataIn.close();
		return res;
	}

	//проверка введенного логина при авторизации
	static bool isCorrect(string login) {
		bool res {0};
		ifstream dataIn;
		dataIn.open("User data.txt", ofstream::app);
		if (!dataIn.is_open()) {
			cout << "File opening error!";
		}
		else {
			cout << "File is open.\n";
			string fileString = " ";
			while (!dataIn.eof()) {
				//fileString = getline(dataIn);
				dataIn >> fileString;
				//если логин уже есть в файле
				if (login == fileString) {
					res = 0;
				}
				else {
					res = 1;
				}
			}
		}
		dataIn.close();
		return res;
	}
	
	static string encription(string login) {
		int key = 4;
		int size = login.length();
		string cryptoLogin;
		for (int i = 0; i < size; i++) {
			cryptoLogin += (char)login.at(i) + key;
		}
		return cryptoLogin;
	}

	static string decodingLogin(string login) {
		int key = 4;
		int size = login.length();
		string cryptoLogin;
		for (int i = 0; i < size; i++) {
			cryptoLogin += (char)login.at(i) + key;
		}
		return cryptoLogin;
	}


};


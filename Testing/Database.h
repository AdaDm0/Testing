#define __CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
#include "User.h"
using namespace std;
#pragma once


//����� ��� ��������� ������

class Database
{
public:
	//�������� ���� ����������� ������ ��� ��������� ���������
	static void saveData(User user=User::questionare()) {
		//FILE* users = fopen("Users.txt", "a+");
		//if (!users) {
		//	exit(0);
		//}
		//else {
		//	fwrite(/*"�������� ���� ����� ��� ����������"*/User &a, sizeof(char), 1, users);
		//	fclose(users);
		//}
		
		//���������� ������������ � ����
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
	
	
		//�������� ������ �� ����������
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


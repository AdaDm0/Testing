#define __CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdio.h>
#include <fstream>
using namespace std;
#pragma once


//����� ��� ��������� ������

class Database
{
public:
	//�������� ���� ����������� ������ ��� ��������� ���������
	void init() {
		FILE* users = fopen("Users.txt", "a+");
		if (!users) {
			exit(0);
		}
		else {
			fwrite(/*"�������� ���� ����� ��� ����������"*/User &a, sizeof(char), 1, users);
			fclose(users);
		}
		


		 
	}
	
	
		//�������� ������ �� ����������
	bool isUnique(string login) {




	}
};


// Testing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include "Menu.h"
#include "User.h"
using namespace std;

int main()
{
	//Menu::entrance();
	User user = User::questionare();
	User::saveData(user);

}


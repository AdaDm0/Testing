#include "User.h"
#include "Database.h"
#include <conio.h>
#pragma once

class Menu
{
public:
	
	
	
	static void entrance() {
		cout << "ENTRANCE" << endl;
		cout << "_____________________" << endl;
		cout << "Choose: 1 - for login; 2 - for registration" << endl;  // ����� 1 = 49, 2 = 50
		int c = _getche();
		cout << endl;
		switch (c) {
			//���� ����� 1 - ����
			case 49:
				break;
			// ���� �����  2 - �����������
			case 50:
				User user = User::questionare();
				//Database::saveData(User u = User::questionare());
				;
		}
			

	}
};


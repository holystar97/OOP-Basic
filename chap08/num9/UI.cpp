#include "UI.h"
#include <iostream>
using namespace std;

int UI::getMainMenu() {
	cout << "���� :1, ��� :2, ����:3 ������ :4 >> ";
	int menu;
	cin >> menu;
	return menu;
}

int UI::getSubMenu() {
	cout << "07�� :1, 12�� : 2, 17��:3 >> ";
	int menu;

	cin >> menu;
	return menu;
}

bool UI::getSeatNo(int& no) {
	cout << "�¼���ȣ >> ";

	cin >> no;
	
	if (!cin) {
		cout << "�߸��� �Է��Դϴ�." << endl;
		cin.clear();
		cin.ignore(256, '\n');

		return false;
	}
	
	return true;
}


string UI::getUserName() {
	cout << "�̸� �Է� >> ";
	string name;

	cin >> name;
	return name;
}


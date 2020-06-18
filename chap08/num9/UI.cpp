#include "UI.h"
#include <iostream>
using namespace std;

int UI::getMainMenu() {
	cout << "예약 :1, 취소 :2, 보기:3 끝내기 :4 >> ";
	int menu;
	cin >> menu;
	return menu;
}

int UI::getSubMenu() {
	cout << "07시 :1, 12시 : 2, 17시:3 >> ";
	int menu;

	cin >> menu;
	return menu;
}

bool UI::getSeatNo(int& no) {
	cout << "좌석번호 >> ";

	cin >> no;
	
	if (!cin) {
		cout << "잘못된 입력입니다." << endl;
		cin.clear();
		cin.ignore(256, '\n');

		return false;
	}
	
	return true;
}


string UI::getUserName() {
	cout << "이름 입력 >> ";
	string name;

	cin >> name;
	return name;
}


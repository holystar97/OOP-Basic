#include <iostream>
using namespace std;

#include <string>
#include "airlineBook.h"
#include "Schedule.h"
#include "UI.h"
AirlineBook::AirlineBook(string name) {
	this->name = name;
	p = new Schedule[3];
	p[0].setTime("07��");
	p[1].setTime("12��");
	p[2].setTime("17��");
}

AirlineBook::~AirlineBook() {
	if (p) {
		delete[] p;
	}
}

void AirlineBook::run() {
	cout << "***** " << name << "�� ���Ű��� ȯ���մϴ�. *****" << endl;
	while (true) {
		int menu = UI::getMainMenu();
		switch (menu) {
		case 1:book(); break;
		case 2:cancel(); break;
		case 3:view(); break;
		case 4:return;
		}
	}
}


void AirlineBook::book() {
	int menu = UI::getSubMenu();
	p[menu - 1].book();
}

void AirlineBook::cancel() {
	int menu = UI::getSubMenu();
	p[menu - 1].cancel();
}

void AirlineBook::view() {
	for (int i = 0; i < 3; i++) {
		p[i].view();
	}
}
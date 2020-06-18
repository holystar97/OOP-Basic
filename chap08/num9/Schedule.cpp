#include "Schedule.h"
#include "Seat.h"
#include "UI.h"
#include <iostream>
using namespace std;

Schedule::Schedule() {
	time = "";
	p = new Seat[8];
}

Schedule:: ~Schedule() {
	if (p) {
		delete[] p;
	}
}

void Schedule::setTime(string time) {
	this->time = time;
}

void Schedule::book() {
	view();
	int no;
	
	if (UI::getSeatNo(no) == false)
	{
		return;
	}

	string name = UI::getUserName();
	p[no - 1].book(name);
}

void Schedule::cancel() {
	view();
	int no;
	if (UI::getSeatNo(no) == false)
	{
		return;
	}

	if (p[no - 1].isBooked()) {
		p[no - 1].cancel();
	}
	else {
		cout << "예약되어있는 좌석이 아닙니다." << endl;
	}

}

void Schedule::view() {
	for (int i = 0; i < 8; i++) {
		p[i].view();
	}
	cout << endl;
}

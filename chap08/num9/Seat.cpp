#include "Seat.h"
#include <iostream>
using namespace std;

Seat::Seat() {
	name = "----"; // ������ ���� 
}
Seat::~Seat() {}

bool Seat::isBooked() {
	if (name.compare("----") == 0) {
		return false;
	}
	else {
		return true;
	}
}

void Seat::book(string name) {
	this->name = name;
}

void Seat::cancel(){
	this->name = "----";
}

void Seat::view() {
	cout << name << "\t";
}
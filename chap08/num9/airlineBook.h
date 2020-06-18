#ifndef AIRLINEBOOK_H
#define AIRLINEBOOK_H

#include <string>
using namespace std;

class Schedule;

class AirlineBook {
	Schedule* p;
	string name;

	void book();
	void cancel();
	void view();

public:
	AirlineBook(string name);
	~AirlineBook();

	void run();
};

#endif

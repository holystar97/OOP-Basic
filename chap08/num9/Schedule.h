#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <string>
using namespace std;

class Seat;

class Schedule {
	string time;
	Seat* p;

public:
	Schedule();
	~Schedule();
	void setTime(string time);
	void book();
	void cancel();
	void view();
};

#endif

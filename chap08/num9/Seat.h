#ifndef  SEAT_H
#define  SEAT_H
#include <string>
using namespace std;
class Seat {
	string name;
public:
	Seat();
	~Seat();
	void book(string name);
	void cancel();
	void view();
	bool isBooked();
};

#endif
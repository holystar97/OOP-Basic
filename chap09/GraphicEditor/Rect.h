#ifndef RECT_H
#define RECT_H
#include "Shape.h"
#include <iostream>
using namespace std;
class Rect : public Shape {
public:
	void draw();
	~Rect() {
		cout << "~RECT() " << endl;
	}
};

#endif

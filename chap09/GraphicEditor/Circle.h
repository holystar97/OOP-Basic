#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>
using namespace std;
class Circle : public Shape {
public:
	void draw();
	~Circle() {
		cout << "~circle() " << endl;
	}
};

#endif

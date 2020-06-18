#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Line : public Shape {
public:
	void draw(); // 오버라이딩
	~Line() {
		cout << "~line() " << endl;
	}
};

#endif
#ifndef LINE_H
#define LINE_H
#include "Shape.h"
#include <iostream>
using namespace std;

class Line : public Shape {
public:
	void draw(); // �������̵�
	~Line() {
		cout << "~line() " << endl;
	}
};

#endif
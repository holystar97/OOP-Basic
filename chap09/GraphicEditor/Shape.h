#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
	Shape* next; // next는 Shape을 상속받은 객체를 가리킴
protected:
public:
	Shape() { next = NULL; }
	Shape* add(Shape* p);
	virtual ~Shape() {
		cout << "SHAPE 소멸 " << endl;
	}
	void paint();
	virtual void draw() = 0; // 순수 가상 함수 
	Shape* getNext() { return next; }
};

#endif


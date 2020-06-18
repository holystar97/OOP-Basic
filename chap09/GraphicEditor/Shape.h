#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
	Shape* next; // next�� Shape�� ��ӹ��� ��ü�� ����Ŵ
protected:
public:
	Shape() { next = NULL; }
	Shape* add(Shape* p);
	virtual ~Shape() {
		cout << "SHAPE �Ҹ� " << endl;
	}
	void paint();
	virtual void draw() = 0; // ���� ���� �Լ� 
	Shape* getNext() { return next; }
};

#endif


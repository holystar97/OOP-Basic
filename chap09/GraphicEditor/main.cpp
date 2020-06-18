#include <iostream>
using namespace std;
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"

void printAll(Shape* p) {
	while (p != NULL) {
		p->draw();
		p = p->getNext();
	}
}

int main() {
	Shape* pStart = NULL;
	Shape* pLast;
	pStart = new Circle(); // ��ĳ���� 
	pLast = pStart;

	pLast= pLast->add(new Rect());
	pLast = pLast->add(new Circle());
	pLast = pLast->add(new Line());
	pLast = pLast->add(new Rect());

	printAll(pStart);

	Shape* p;
	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext();
		delete p;
		p = q;
	}

}
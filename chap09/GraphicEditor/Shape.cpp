#include "Shape.h"
#include <iostream>
using namespace std;

//void Shape::draw() {}

void Shape::paint() {
	draw(); // ���� ���ε� �Ǵ� �Լ� ȣ�� 
}

Shape* Shape::add(Shape* p) {
	next = p;
	return p;
}
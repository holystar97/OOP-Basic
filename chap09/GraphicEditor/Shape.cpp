#include "Shape.h"
#include <iostream>
using namespace std;

//void Shape::draw() {}

void Shape::paint() {
	draw(); // 동적 바인딩 되는 함수 호출 
}

Shape* Shape::add(Shape* p) {
	next = p;
	return p;
}
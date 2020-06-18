#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) {
		this->radius = radius;
	}
	int getRadius() {
		return radius;
	}
	friend Circle operator ++ (Circle& op, int x);
};
// 후행 연산자 ++를 Circle의 멤버함수가 아닌 외부 함수로 중복하라

int main() {
	Circle donut;
	donut++;
}

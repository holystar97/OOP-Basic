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
// ���� ������ ++�� Circle�� ����Լ��� �ƴ� �ܺ� �Լ��� �ߺ��϶�

int main() {
	Circle donut;
	donut++;
}

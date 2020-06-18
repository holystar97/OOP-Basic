#include <iostream>
using namespace std;

class Point {
	int x, y; // 점의 좌표
public:
	Point() {
		cout << "Point 생성자 " << endl;
	}
	void set(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void showPoint() {
		cout << "(" << x << "," << y << " )" << endl;
	}
};

class ColorPoint : public Point {
// Point클래스 상속, 파생 클래스 
	string color;
public:
	ColorPoint() {
		cout << "ColorPoint 생성자 " << endl;
	}
	void setColor(string color) {
		this->color = color;
	}
	void showColorPoint();
};

void ColorPoint::showColorPoint() {
	cout << color << x << ' ' << y << endl;
}


int main() {

	ColorPoint cp;

}
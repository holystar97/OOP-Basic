#include <iostream>
using namespace std;

class Point {
	int x, y; // ���� ��ǥ
public:
	Point() {
		cout << "Point ������ " << endl;
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
// PointŬ���� ���, �Ļ� Ŭ���� 
	string color;
public:
	ColorPoint() {
		cout << "ColorPoint ������ " << endl;
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
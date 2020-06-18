#include <iostream>
using namespace std;

class Rect; //���� ���� 
bool equals(Rect r, Rect s);

class Rect {
	int width, height;
public:
	Rect(int width, int height);
	friend bool equals(Rect r, Rect s);
};


bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == r.width) {
		return true;
	}
	else {
		return false;
	}
}


Rect::Rect(int width, int height) {
	this->width = width;
	this->height = height;
}


int main() {
	Rect a(3, 4), b(4, 5);
	if (equals(a, b)) {
		cout << "equals" << endl;
	}
	else {
		cout << "not " << endl;
	}
}
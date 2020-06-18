#include <iostream>
using namespace std;

class Rect;

class RectManager {
public :
	bool equals(Rect r, Rect s);
};

class Rect {
	int width, height;
public:
	Rect(int width, int height);
	friend bool RectManager::equals(Rect r, Rect s);
};


bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height) {
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
	Rect a(4, 5), b(4, 5);
	RectManager man;

	if (man.equals(a, b)) {
		cout << "equals" << endl;
	}
	else {
		cout << "not " << endl;
	}
}
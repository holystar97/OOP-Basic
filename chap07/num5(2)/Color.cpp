#include "Color.h"
#include <iostream>
using namespace std;

Color::Color() {
	red = 0;
	green = 0;
	blue = 0;
}

Color :: Color(int r, int g, int b) {
	red = r;
	green = g;
	blue = b;
}

void Color :: show() {
	cout << red << ' ' << green << ' ' << blue << endl;
}

Color operator+ (Color c1, Color c2) {
	Color tmp;
	tmp.red = c1.red + c2.red;
	tmp.green = c1.green + c2.green;
	tmp.blue = c1.blue + c2.blue;
	return tmp;
}
bool operator==(Color c1, Color c2) {
	if (c1.red == c2.red && c1.green == c2.green
		&& c1.blue == c2.blue) {
		return true;
	}
	else {
		return false;
	}
}
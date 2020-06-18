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
	
Color Color :: operator+ (Color c) {
	Color tmp;
	tmp.red = this->red + c.red;
	tmp.green = this->green + c.green;
	tmp.blue = this->blue + c.blue;
	return tmp;
}
bool Color :: operator==(Color c) {
	if (this->red == c.red && this->green == c.green
		&& this->blue == c.blue) {
		return true;
	}
	else {
		return false;
	}
}

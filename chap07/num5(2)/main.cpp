#include "Color.h"
#include <iostream>
using namespace std;




int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();
	Color fuchsia(255, 0, 255);
	if (c == fuchsia) {
		cout << "보라색 맞음";
	}
	else {
		cout << "보라색 아님";
	}
}


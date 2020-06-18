#ifndef COLOR_H
#define COLOR_H

class Color {
	int red, green, blue;
public:
	Color();
	Color(int r, int g, int b);
	void show();
	Color operator+ (Color c);
	bool operator == (Color c);
};

#endif


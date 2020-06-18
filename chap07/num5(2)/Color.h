#ifndef COLOR_H
#define COLOR_H

class Color {
	int red, green, blue;
public:
	Color();
	Color(int r, int g, int b);
	void show();
	friend Color operator+ (Color c1, Color c2);
	friend bool operator == (Color c1, Color c2);
};

#endif

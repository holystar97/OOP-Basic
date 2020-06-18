#include <iostream>
using namespace std;
#include "average.h"


Average::Average() {
	index = 0;
}
void Average::put(int x) {
	if (index == 100) {
		return;
	}
	n[index] = x;
	index++;
}

void Average::showAll() {
	for (int i = 0; i < index; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
}

double Average::getAverage() {
	int sum = 0;
	for (int i = 0; i < index; i++) {
		sum += n[i];
	}
	return sum / (double)index;
}


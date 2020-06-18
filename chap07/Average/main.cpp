#include <iostream>
using namespace std;

#include "average.h"
int main() {
	Average avg;
	avg.put(10);
	avg.put(15);
	avg.put(100);
	avg.showAll();
	cout << "Æò±ÕÀº " << avg.getAverage() << endl;
}
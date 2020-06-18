#include <iostream>
using namespace std;

template <class X>
void print(X array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << array[i] << "\t";
	}
	cout << endl;
}

void print(char array[], int n) {
	for (int i = 0; i < n; i++) {
		cout << (int)array[i] << "\t";
	}
	cout << endl;
}

int main() {
	int x[] = { 1,2,3,4,5 };
	double d[5] = { 1.1,2.2,3.3,4.4,5.5 };

	print(x, 3);
	print(d, 4);

	//char c[] = { 49,50,51,52,53 };
	char c[] = { 1,2,3,4,5 };
	print(c, 4);
}
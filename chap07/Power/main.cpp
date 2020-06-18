#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power operator +(int op2);
	Power operator + (Power op2);
	bool operator ==(Power op2);
	Power& operator +=(Power op2);
	Power& operator ++ (); // 전위 
};

Power& Power :: operator ++() {
	kick++;
	punch++;
	return *this;
}


Power& Power :: operator+=(Power op2) {
	kick += op2.kick;
	punch += op2.punch;
	return *this;
}

Power Power :: operator+ (int op2) {
	Power tmp;
	tmp.kick += op2;
	tmp.punch += op2;
	return tmp;
}

bool Power :: operator == (Power op2) {
	if (kick == op2.kick && punch == op2.punch) {
		return true;
	}
	else {
		return false;
	}
}

Power Power :: operator+ (Power op2) {
	Power tmp;
	tmp.kick = kick + op2.kick;
	tmp.punch = punch + op2.punch;
	return tmp;
}

void Power::show() {
	cout << "kick= " << kick << "," << "punch = " << punch << endl;
}

int main() {
	Power a(4, 6), b(-4, -6), c;
	c = ++++a;
	a.show();
	c.show();
	//b = a += 2;
	//a.show();
	//b.show();
	//c = a + b; // a.+(b)
	/*if (a == b) {
		cout << "두 파워가 같다" << endl;
	}
	else {
		cout << "두 파워가 같지 않다." << endl;
	}
	//c=(a += b); // a.+=(b); 
	(a += b) += c;
	//a.show();
	//b.show();
	//c.show();
	*/
}
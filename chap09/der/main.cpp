#include <iostream>
using namespace std;

class Base {
public:
	void g() {}
	virtual void f() { cout << "Base :: f() called" << endl; }
	virtual ~Base() { cout << "~Base () " << endl; // 메모리 할당 해제 
	}
};

class Derived :public Base {
public:
	void f() { cout << "Derived :: f() called" << endl; } // 오버라이딩
	~Derived() { cout << "~Derived() " << endl; }
};

int main() {
	Derived* p = new Derived();

	Base* q = p;

	q->f();
	delete p;

}
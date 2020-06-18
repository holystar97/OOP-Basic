#include <iostream>
using namespace std;

class Base {
public:
	void g() {}
	virtual void f() { cout << "Base :: f() called" << endl; }
	virtual ~Base() { cout << "~Base () " << endl; // �޸� �Ҵ� ���� 
	}
};

class Derived :public Base {
public:
	void f() { cout << "Derived :: f() called" << endl; } // �������̵�
	~Derived() { cout << "~Derived() " << endl; }
};

int main() {
	Derived* p = new Derived();

	Base* q = p;

	q->f();
	delete p;

}
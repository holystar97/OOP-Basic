#include "MyStack.h"



	void MyStack:: push(int val) {
		put(top, val);
		top++;
	}
	int MyStack::capacity() {
		return getCapicity();
	}
	int MyStack::length() {
		return top;
	}
	int MyStack::pop() {
		top--;
		return get(top);
	}
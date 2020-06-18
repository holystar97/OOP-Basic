#ifndef MYSTACK_H
#define MYSTACK_H
#include "BaseArray.h"

class MyStack : public BaseArray {
	int top = 0;
public:
	MyStack(int capacity) : BaseArray(capacity) { }
	void push(int val);
	int capacity();
	int length();
	int pop();
};


#endif

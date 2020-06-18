#ifndef MYQUEUE_H
#define MYQUEUE_H
#include "BaseArray.h"

class MyQueue :protected BaseArray {
	int front;
	int rear;
public:
	MyQueue(int capacity);
	void enqueue(int n);
	int capacity();
	int length();
	int dequeue();
};


#endif

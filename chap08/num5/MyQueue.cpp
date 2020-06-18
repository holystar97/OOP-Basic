#include "MyQueue.h"
#include <iostream>
using namespace std;


	MyQueue :: MyQueue(int capacity) : BaseArray(capacity) {
		front = rear = 0;
	}
	void 	MyQueue::enqueue(int n) {
		if (rear >= getCapicity()) {
			cout << "ť�� �� á���ϴ�. " << endl;
			exit(1);
		}
		put(rear, n);
		rear++;
	}
	int  	MyQueue:: capacity() {
		return getCapicity();
	}
	int 	MyQueue::length() {
		return rear;
	}
	int 	MyQueue::dequeue() {
		if (rear < 0) {
			cout << "ť�� ������ϴ�." << endl;
			exit(1);
		}
		int temp;
		temp = front;
		++front;
		rear--;
		return get(temp);
	}
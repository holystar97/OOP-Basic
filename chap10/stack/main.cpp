#include <iostream>
using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
	int size();
};
template <class T>
MyStack<T>::MyStack() {
	tos = -1; // tos�� ���� ���ÿ� ����� �������� �ְ� �ε��� 
}
template <class T>
void MyStack<T> ::push(T element) {
	if (tos == 99) {
		cout << "full" << endl;
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T> ::pop() {
	T ret;

	if (tos == -1) {
		cout << "empty" << endl;
		return 0;
	}
	ret = data[tos];
	tos--;
	return ret;
}

template <class T>
int MyStack<T> ::size() {
	return tos + 1;
}


int main() {
	MyStack<int> iStack;
	iStack.push(3);
	cout << iStack.pop() << endl;

	MyStack<double> dStack;
	dStack.push(3.5);
	cout << dStack.pop() << endl;

	MyStack<string> sStack;
	sStack.push("������");
	sStack.push("�ñ��մϴ�.");
	cout << sStack.pop() << endl;

	int n = sStack.size();
	for (int i = 0; i < n; i++) {
		cout << sStack.pop() << endl;
	}

}
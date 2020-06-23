#include <iostream>
using namespace std;

class Shape {
private:
	Shape* next;
public:
	Shape() {
		next = NULL;
	}
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	Shape* getNext() {
		return next;
	}
	Shape* setNext(Shape*p){
		this->next = p->next;
	}
	virtual void draw() = 0;
};

class Line :public Shape {
	virtual void draw() {
		cout << "Line " << endl;
	}
};

class Circle : public Shape {
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

class Rect : public Shape {
	void draw() {
		cout << "Rect " << endl;
	}
};

void makeShape(int n,Shape* start,Shape*end) {

	switch (n) {
	case 1:
		start = new Line();
		end->add(start);
		break;
	case 2:
		start = new Circle();
		end->add(start);
		break;
	case 3:
		start = new Rect();
		end->add(start);
		break;
	}
}
void deleteShape(int n,Shape* start, Shape*end) {



}

int main() {

	cout << "�׷��� �������Դϴ�." << endl;
	int num;
	Shape* start;
	Shape* end;
	while(true){
		cout << "���� : 1 ���� :2 ��� ���� :3 ���� :4  >> ";
		cin >> num;
	
		switch (num) {
		case 1:
			int n;
			cout << "�� :1 ,�� :2 ,�簢�� :3 >> ";
			cin >> n;
			makeShape(n,start,end);
			break;
		case 2:
			int n;
			cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
			cin >> n;
			deleteShape(n);
			break;
		case 3:
			break;

		}
	}


}
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

	cout << "그래픽 에디터입니다." << endl;
	int num;
	Shape* start;
	Shape* end;
	while(true){
		cout << "삽입 : 1 삭제 :2 모두 보기 :3 종료 :4  >> ";
		cin >> num;
	
		switch (num) {
		case 1:
			int n;
			cout << "선 :1 ,원 :2 ,사각형 :3 >> ";
			cin >> n;
			makeShape(n,start,end);
			break;
		case 2:
			int n;
			cout << "삭제하고자 하는 도형의 인덱스 >> ";
			cin >> n;
			deleteShape(n);
			break;
		case 3:
			break;

		}
	}


}
#include <iostream>
#include <vector>
using namespace std;

class Shape {
public:
	virtual void draw() = 0;
};

class Line:public Shape {
	void draw() {
		cout << "Line" << endl;
	}
};

class Rect :public Shape {
	void draw() {
		cout << "Rect" << endl;
	}
};

class Circle :public Shape {
	void draw() {
		cout << "Circle" << endl;
	}
};

int main() {
	vector<Shape*> v;
	cout << "그래픽 에디터입니다. " << endl;
	while (true) {
		cout << "삽입:1, 삭제:2, 모두보기 :3, 종료 :4 >> ";
		int n;
		cin >> n;
		switch (n) {
		case 1:
			int n;
			cout << "선:1, 원:2, 사각형:3 >> ";
			cin >> n;
			switch (n) {
			case 1:
				v.push_back(new Line());
				break;
			case 2:
				v.push_back(new Circle());
				break;
			case 3:
				v.push_back(new Rect());
				break;
			default:
				cout << "잘못선택하셨습니다. " << endl;
				break;
			}
			break;
		case 2:
			cout << "삭제하고자 하는 도형의 인덱스는?" << endl;
			cin >> n;
			v.erase(v.begin() + n);
			break;
		case 3:
			for (int i = 0; i < v.size(); i++) {
				cout << i << ":";
				v.at(i)->draw();
			}
			break;
		case 4:
			return 0;
		}
	}
}

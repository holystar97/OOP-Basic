#include <iostream>
#include <vector>
using namespace std;


class Shape {
	virtual void draw() = 0;
public:
	void paint() { draw(); }
};





class UI {
	static int num;
public:
	static void start(); // 인사말 출력 
	static int menu();
	static int insert();
	static int del();
};

void UI::start() {
	cout << "반갑습니다. 안녕하세요 ! 그래픽 에디터 화면입니다." << endl;
}

int UI::menu() {
	cout << "삽입 :1 삭제 :2 모두 보기:3 종료 :4 >> ";
	cin >> num;
	return num;
}

int UI::insert() {
	cout << "선 :1, 원 :2, 사각형 :3 >> ";
	cin >> num;
	return num;
}

int UI::del() {
	cout << "삭제하고자 하는 도형의 인덱스를 고르세요 ";
	cin >> num;
	return num;
}


class GraphicEditor {
	vector<Shape*> v;
	vector<Shape*> ::iterator it;
public:
	void start();
};

void GraphicEditor::start() {
	UI::start();
	while (true) {
		int num = UI::menu();
		switch (num) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			return;
		default:
			cout << "잘못된 입력입니다." << endl;
			break;
		}
	}
}

int main() {
	GraphicEditor* g = new GraphicEditor;
	g->start();
	delete g;
}
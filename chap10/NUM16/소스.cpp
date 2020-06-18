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
	static void start(); // �λ縻 ��� 
	static int menu();
	static int insert();
	static int del();
};

void UI::start() {
	cout << "�ݰ����ϴ�. �ȳ��ϼ��� ! �׷��� ������ ȭ���Դϴ�." << endl;
}

int UI::menu() {
	cout << "���� :1 ���� :2 ��� ����:3 ���� :4 >> ";
	cin >> num;
	return num;
}

int UI::insert() {
	cout << "�� :1, �� :2, �簢�� :3 >> ";
	cin >> num;
	return num;
}

int UI::del() {
	cout << "�����ϰ��� �ϴ� ������ �ε����� ������ ";
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
			cout << "�߸��� �Է��Դϴ�." << endl;
			break;
		}
	}
}

int main() {
	GraphicEditor* g = new GraphicEditor;
	g->start();
	delete g;
}
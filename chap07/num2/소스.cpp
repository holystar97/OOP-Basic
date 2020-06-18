#include <iostream>
using namespace std;

class Book {
private:
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int page = 0) {
		this->title = title;
		this->price = price;
		this->pages = page;
	}
	void show() {
		cout << title << price << "��" << pages << "������" << endl;
	}
	string getTitle()
	{
		return title;
	}

	bool operator == (int a) {
		if (price == a) {
			return true;
		}
		return false;
	}

	bool operator == (string a) {
		if (title == a) {
			return true;
		}
		return false;
	}
	
	bool operator == (Book& a) {
		if (this->price == a.price && this->title == a.title) {
			return true;
		}
		return false;
	}

};

int main() {

	Book a("��ǰ c++", 30000, 500), b("��ǰ c++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ c++") cout << "��ǰ c++ �Դϴ�. " << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�. " << endl;
}
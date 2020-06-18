#include <iostream>
using namespace std;

class Book {
private:
	string title;
	int price;	
	int pages;
public:
	Book(string title="", int price=0, int page=0) {
		this->title = title;
		this->price = price;
		this->pages = page;
	}
	Book& operator +=(int price) {
		this->price += price;
		return *this;
	}
	Book& operator -=(int price) {
		this->price -= price;
		return *this;
	}
	void show() {
		cout << title << price << "��" << pages << "������" << endl;
	}
	string getTitle()
	{
		return title;
	}
};

int main() {
	Book a("û��",20000, 300), b("�̷�",30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
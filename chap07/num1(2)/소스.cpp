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

	friend Book operator +=(Book& book, int price);
	friend Book operator -=(Book& book, int price);
};


Book operator +=(Book& book,int price) {
	book.price += price;
	return book;
}
Book operator -=(Book& book,int price) {
	book.price -= price;
	return book;
}

int main() {
	Book a("û��", 20000, 300), b("�̷�", 30000, 500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
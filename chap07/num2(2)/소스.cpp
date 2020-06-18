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
		
	friend bool operator == (Book& book, int a);
	friend bool operator == (Book& book, string a);
	friend bool operator == (Book& book, Book& a);
};
 bool operator == (Book & book, int a) {
  if (book.price == a) {
	  return true;
  }
  return false;
}

bool operator == (Book & book,string a) {
	if (book.title == a) {
		return true;
	}
	return false;
}

bool operator == (Book& book,Book& a) {
	if (book.price == a.price && book.title == a.title) {
		return true;
	}
	return false;
}


int main() {

	Book a("��ǰ c++", 30000, 500), b("��ǰ c++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ c++") cout << "��ǰ c++ �Դϴ�. " << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�. " << endl;
}
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
		cout << title << price << "원" << pages << "페이지" << endl;
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

	Book a("명품 c++", 30000, 500), b("고품 c++", 30000, 500);
	if (a == 30000) cout << "정가 30000원" << endl;
	if (a == "명품 c++") cout << "명품 c++ 입니다. " << endl;
	if (a == b) cout << "두 책이 같은 책입니다. " << endl;
}
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

	bool operator! () {
		if (price == 0) {
			return true;
		}
		return false;
	}

};



int main() {
	Book book("�������", 0, 50);
	if (!book) cout << "��¥��" << endl;
}
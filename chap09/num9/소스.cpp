#include <iostream>
using namespace std;

class Printer {
protected:
	string model;
	string manu;
	int printPage;
	int availCount;
public:
	Printer(string model, string manu, int availCount) {
		this->model = model;
		this->manu = manu;
		this->availCount = availCount;
	}
	int getAvail() {
		return availCount;
	}
	virtual void print(int pages) = 0;
	virtual void show() = 0;

};

class InkJetPrinter : public Printer {
private:
	int availInk;
public:
	InkJetPrinter(string model, string manu, int availCount, int availInk) : Printer(model, manu, availCount) {
		this->availInk = availInk;
	}
	void print(int pages) {
		printPage = pages;
		availCount -= printPage;
		availInk -= printPage;
	}
	void show() {
		cout << model << "," << manu << ", 남은 종이 " << availCount << "장 , 남은 잉크 " << availInk << endl;
	}
};

class LaserPrinter : public Printer {
private:
	int availToner;
public:
	LaserPrinter(string model, string manu, int availCount, int availToner) : Printer(model, manu, availCount) {
		this->availToner = availToner;
	}
	void print(int pages) {
		printPage = pages;
		availCount -= printPage;
		availToner -= printPage;
	}
	void show() {
		cout << model << "," << manu << ", 남은 종이 " << availCount << "장 , 남은 토너 " << availToner << endl;
	}

};

int main() {

	InkJetPrinter* InkJet = new InkJetPrinter("OfficeJET","hP",5,10);
	LaserPrinter* Laser = new LaserPrinter("scx-5x45", "삼성전자",3,20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다. " << endl;
	cout << "잉크젯: ";
	InkJet->show();
	cout << "레이저: ";
	Laser->show();

	while (true) {
		int type;
		int num;
		cout << "프린터(1:잉크젯 , 2: 레이져)와 매수 입력 >> ";
		cin >> type >> num;
		
		switch (type) {
		case 1:
			if (num <= InkJet->getAvail()) {
				cout << "프린트 하였습니다." << endl;
				InkJet->print(num);
				InkJet->show();
				Laser->show();
			}
			else {
				cout << "용지가 부족하여 인쇄를 할 수 없습니다. " << endl;
				InkJet->show();
				Laser->show();
			}
			break;
		case 2:
			if (num <= Laser->getAvail()) {
				cout << "프린트 하였습니다." << endl;
				Laser->print(num);
				InkJet->show();
				Laser->show();
			}
			else {
				cout << "용지가 부족하여 인쇄를 할 수 없습니다. " << endl;
				InkJet->show();
				Laser->show();
			}
			break;
		default:
			cout << "잘못입력하셨습니다. " << endl;
		}
	
	}



}
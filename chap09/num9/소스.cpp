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
		cout << model << "," << manu << ", ���� ���� " << availCount << "�� , ���� ��ũ " << availInk << endl;
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
		cout << model << "," << manu << ", ���� ���� " << availCount << "�� , ���� ��� " << availToner << endl;
	}

};

int main() {

	InkJetPrinter* InkJet = new InkJetPrinter("OfficeJET","hP",5,10);
	LaserPrinter* Laser = new LaserPrinter("scx-5x45", "�Ｚ����",3,20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����. " << endl;
	cout << "��ũ��: ";
	InkJet->show();
	cout << "������: ";
	Laser->show();

	while (true) {
		int type;
		int num;
		cout << "������(1:��ũ�� , 2: ������)�� �ż� �Է� >> ";
		cin >> type >> num;
		
		switch (type) {
		case 1:
			if (num <= InkJet->getAvail()) {
				cout << "����Ʈ �Ͽ����ϴ�." << endl;
				InkJet->print(num);
				InkJet->show();
				Laser->show();
			}
			else {
				cout << "������ �����Ͽ� �μ⸦ �� �� �����ϴ�. " << endl;
				InkJet->show();
				Laser->show();
			}
			break;
		case 2:
			if (num <= Laser->getAvail()) {
				cout << "����Ʈ �Ͽ����ϴ�." << endl;
				Laser->print(num);
				InkJet->show();
				Laser->show();
			}
			else {
				cout << "������ �����Ͽ� �μ⸦ �� �� �����ϴ�. " << endl;
				InkJet->show();
				Laser->show();
			}
			break;
		default:
			cout << "�߸��Է��ϼ̽��ϴ�. " << endl;
		}
	
	}



}
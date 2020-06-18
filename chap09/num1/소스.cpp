#include <iostream>
using namespace std;

class Converter {
protected:
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
	virtual double convert(double src) = 0;
	double ratio;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "��" << getDestString() << "�� �ٲߴϴ�.";
		cout << getSourceString() << "�� �Է��ϼ��� ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public  Converter {
public:
	WonToDollar(int n) : Converter(n) {};
	double convert(double src) {
		double re = src / 1010;
		return re;
	}
	string getSourceString() {
		return "��";
	}
	string getDestString() {
		return "�޷�";
	}
};

int main() {
	WonToDollar wd(1010);
	wd.run();
}
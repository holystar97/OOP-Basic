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
		cout << getSourceString() << "을" << getDestString() << "로 바꿉니다.";
		cout << getSourceString() << "을 입력하세요 ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
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
		return "원";
	}
	string getDestString() {
		return "달러";
	}
};

int main() {
	WonToDollar wd(1010);
	wd.run();
}
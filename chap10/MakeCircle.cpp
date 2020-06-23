#include <iostream>
#include <vector>
using namespace std;

class Circle {
private:
	int radius;
	string name;
public:
	Circle(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	string getName() {
		return name;
	}
};


int main() {
	vector<Circle*> v;
	cout << "원을 삽입하고 삭제하는 프로그램입니다. " << endl;
	while (true) {
		cout << "삽입 :1 , 삭제 :2, 모두보기:3 ,종료 :4 >> ";
		int n;
		cin >> n;
		int r;
		string name;
		vector<Circle*>::iterator it = v.begin();

		switch (n) {
		case 1:
			cout << "생성하고자 하는 원의 반지름과 이름은 >>";
			cin >> r >> name;
			v.push_back(new Circle(r, name));
			break;
		case 2:
			cout << "삭제하고자 하는 원의 이름은 >> ";
			cin >> name;
			while (it != v.end()) {
				Circle* p = *it;
				if (p->getName() == name) {
					it=v.erase(it);
					//cout << (*it)->getName()<< endl;
					delete p;
					
				}
				else {
					it++;
				}
			}
			break;
		case 3:
			for (int i = 0; i < v.size(); i++) {
				cout << v[i]->getName() << endl;
			}
			break;
		case 4:
			return 0;
		default:
			cout << "보기에 없습니다. " << endl;
			break;
		}
	}

}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Circle {
	string name;
	int radius;
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
	int num;
	cout << "원을 삽입하고 삭제하는 프로그램입니다." << endl;
	
	while (true) {
		cout << "삽입 :1 , 삭제 :2 , 모두 보기 :3, 종료 :4 >> " << endl;
		cin >> num;
		int radius;
		string name;
		vector<Circle*> ::iterator it;
		switch (num) {

		case 1:
			cout << "생성하고자 하는 원의 반지름과 이름은 >> " << endl;
			cin >> radius >> name;
			v.push_back(new Circle(radius, name));
			break;
		case 2:
			cout << "삭제하고자 하는 원의 이름은 >> " << endl;
			cin >> name;
			it = v.begin();
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->getName() == name) {
					v.erase(it);
				}
				else {
					++it;
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

		}
	}


}
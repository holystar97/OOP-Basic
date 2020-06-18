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
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�." << endl;
	
	while (true) {
		cout << "���� :1 , ���� :2 , ��� ���� :3, ���� :4 >> " << endl;
		cin >> num;
		int radius;
		string name;
		vector<Circle*> ::iterator it;
		switch (num) {

		case 1:
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> " << endl;
			cin >> radius >> name;
			v.push_back(new Circle(radius, name));
			break;
		case 2:
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> " << endl;
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
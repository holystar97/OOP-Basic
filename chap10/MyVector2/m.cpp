#include <iostream>
#include <vector>
using namespace std;


void showAll(vector <string> &s) {
	for (int i = 0; i < s.size(); i++) {
		cout << s.at(i) << " ";
	}
	cout << endl;

}

int main() {
	vector<string> s;
	string name;
	cout << "5���� �̸��� �Է��ϼ���" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >>";
		cin >> name;
		s.push_back(name);
	}
	
	showAll(s);
	
	name = s[0];
	for (int i = 1; i < s.size(); i++) {
		if (name < s[i]) {
			//ũ�� �������� �ڿ� ���´�.
			name = s[i];
		}
	}
	cout << "�������� ���� �ڿ� ������ �̸��� " << name << endl;
}
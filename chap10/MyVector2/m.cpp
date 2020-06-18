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
	cout << "5개의 이름을 입력하세요" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " >>";
		cin >> name;
		s.push_back(name);
	}
	
	showAll(s);
	
	name = s[0];
	for (int i = 1; i < s.size(); i++) {
		if (name < s[i]) {
			//크면 사전에서 뒤에 나온다.
			name = s[i];
		}
	}
	cout << "사전에서 제일 뒤에 나오는 이름은 " << name << endl;
}
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> v; // v�� ������ ���� ������ ���� �迭 ���� �����̳�

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	cout << "���� ���� = " << v.size() << endl;

	int n = v.size();
	for (int i = 0; i < n; i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;

	v[0] = 10; // 1->10���� ����
	int m = v[2]; // v[2] = v.at(2)�� ����.
	cout << "2��° ���Ҵ� " << m << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v.at(i) << " ";
	}
	cout << endl;

}
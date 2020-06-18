#include <iostream>
using namespace std;

class Member {
	string name[2]; // "��","��"
	int total[2]; //  total[0]���� ���� ȸ����, total[1]���� ���� ȸ���� 
public:
	Member();
	Member& arrive(string gender, int n);
	void count(string gender, int& n);
	void count(int& n);
};

Member::Member() {
	name[0] = "��";
	name[1] = "��";
	total[0] = total[1] = 0;
}

Member& Member::arrive(string gender, int n) {
	if (name[0] == gender) {
		total[0] += n;
	}
	else if (name[1]==gender){
		total[1] += n;
	}
	return *this;
}

void Member::count(string gender, int& n) {
	if (name[0] == gender) {
		n = total[0];
	}
	else if (name[1] == gender) {
		n = total[1];
	}
}

void Member::count(int& n) {
	n = total[0] + total[1];
}

int main() {
	Member m;
	m.arrive("��", 3).arrive("��", 6).arrive("��", 9);
	m.arrive("��", 12);
	int n = 0;
	m.count("��", n);
	cout << "������ ����" << n << "��" << endl;
	m.count("��", n);
	cout << "������ ����" << n << "��" << endl;
	m.count(n);
	cout << "��ü ȸ�� ����" << n << "��" << endl;
}
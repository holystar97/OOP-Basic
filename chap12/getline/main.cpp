#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("C:\\windows\\system.ini");
	if (!fin) {
		cout << " ���� ���� ���� " << endl;
		return 0;
	}
	int count = 0;
	char buf[81];
	while (fin.getline(buf,81)) { // 80���� ���ڸ� �о���. ��������
		cout << buf << endl;
		count++;
	}
	cout << "���� ����" << count << endl;
	fin.close();
}
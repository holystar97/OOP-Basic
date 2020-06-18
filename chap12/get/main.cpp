#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	//ifstream fin; // >> ������, get()��� �Լ��� ������
	//fin.open(file, ios :: in);

	//ifstream fin(file); //text���
	ifstream fin(file, ios::binary);
	if (!fin) {
		cout << "����" << file << "���� ���� " << endl;
		return 0;
	}

	int line = 0;
	int count = 0;
	int c;
	while ((c = fin.get())!=EOF) {
		//eof ������ ���� ���� �� ���� 
		cout << (char)c; // get�� ���Ͽ��� �� ����Ʈ�� ������� 
		if (c == '\n') {
			line++;
		}
		count++; 
	}
	cout << "���� ����Ʈ�� (���ڼ�)" << count << endl;
	cout << "���� ���μ� " << line << endl;
	fin.close();
}


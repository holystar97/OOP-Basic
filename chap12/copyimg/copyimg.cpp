#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\Users\\mkrice\\Desktop\\apeach.jpeg";
	const char* destFile = "C:\\Users\\mkrice\\Desktop\\u1.jpeg";

	ifstream fsrc(srcFile, ios::binary);
	if (!fsrc) {
		cout << srcFile << "���� ���� " << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::binary);
	if (!fdest) {
		cout << destFile << "���� ���� " << endl;
		return 0;
	}
	/*
	int c;
	while ((c = fsrc.get()) != EOF) {
		fdest.put(c);
	}*/

	char buf[1024]; //1024 ����Ʈ��� ����
	while (fsrc.eof()) {
		fsrc.read(buf, 1024);
		int n=fsrc.gcount();
		fdest.write(buf, n);
	}


	cout << srcFile << "��" << destFile << "�� ����Ϸ�" << endl;
	fsrc.close();
	fdest.close();

}
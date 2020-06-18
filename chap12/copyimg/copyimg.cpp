#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* srcFile = "C:\\Users\\mkrice\\Desktop\\apeach.jpeg";
	const char* destFile = "C:\\Users\\mkrice\\Desktop\\u1.jpeg";

	ifstream fsrc(srcFile, ios::binary);
	if (!fsrc) {
		cout << srcFile << "열기 실패 " << endl;
		return 0;
	}

	ofstream fdest(destFile, ios::binary);
	if (!fdest) {
		cout << destFile << "열기 실패 " << endl;
		return 0;
	}
	/*
	int c;
	while ((c = fsrc.get()) != EOF) {
		fdest.put(c);
	}*/

	char buf[1024]; //1024 바이트라고 생각
	while (fsrc.eof()) {
		fsrc.read(buf, 1024);
		int n=fsrc.gcount();
		fdest.write(buf, n);
	}


	cout << srcFile << "을" << destFile << "로 복사완료" << endl;
	fsrc.close();
	fdest.close();

}
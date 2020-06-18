#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "C:\\windows\\system.ini";
	//ifstream fin; // >> 연산자, get()멤버 함수도 여러개
	//fin.open(file, ios :: in);

	//ifstream fin(file); //text모드
	ifstream fin(file, ios::binary);
	if (!fin) {
		cout << "파일" << file << "열기 실패 " << endl;
		return 0;
	}

	int line = 0;
	int count = 0;
	int c;
	while ((c = fin.get())!=EOF) {
		//eof 파일의 끝을 만날 때 까지 
		cout << (char)c; // get은 파일에서 한 바이트씩 순서대로 
		if (c == '\n') {
			line++;
		}
		count++; 
	}
	cout << "읽은 바이트수 (문자수)" << count << endl;
	cout << "읽은 라인수 " << line << endl;
	fin.close();
}


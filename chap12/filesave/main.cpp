#include <iostream>
#include <fstream>
using namespace std;


int main() {
	char name[10];
	int sid;
	char dept[20];

	cout << "이름 >> ";
	cin >> name;

	cout << "학번 >> ";
	cin >> sid;

	cout << "학과 >> ";
	cin >> dept;

	ofstream fout("C:\\Users\\mkrice\\Desktop\\student.txt");
	if (!fout) {
		//!()연산자 함수를 호출한ㄴ 것 
		return 0; //열기 실패. 더 이상 쓰기앋뇜
	}

	fout << name << endl;
	fout << sid << endl; // 숫자가 문자로 바뀌어 저장
	fout << dept << endl;

	fout.close();




}
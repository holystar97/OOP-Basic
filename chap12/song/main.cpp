#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ifstream fin("C:\\Users\\mkrice\\Desktop\\song.txt");
	
	if (!fin) {
		//���̶��, ���� ���� 
		return 0;
		return 0;
	}
	string line;
	fin >> line;
	cout << line << endl;
	fin >> line;
	cout << line << endl;
	fin >> line;
	cout << line << endl;

	fin.close();// ���� �ݱ�. fin�� ������ ���� ���� 


}
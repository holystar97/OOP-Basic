#include <iostream>
#include <fstream>
using namespace std;


int main() {
	char name[10];
	int sid;
	char dept[20];

	cout << "�̸� >> ";
	cin >> name;

	cout << "�й� >> ";
	cin >> sid;

	cout << "�а� >> ";
	cin >> dept;

	ofstream fout("C:\\Users\\mkrice\\Desktop\\student.txt");
	if (!fout) {
		//!()������ �Լ��� ȣ���Ѥ� �� 
		return 0; //���� ����. �� �̻� ����ҳ�
	}

	fout << name << endl;
	fout << sid << endl; // ���ڰ� ���ڷ� �ٲ�� ����
	fout << dept << endl;

	fout.close();




}
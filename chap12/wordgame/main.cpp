#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void echo(vector<string>& v) {
	int n = v.size();
	for (int i = 0; i < n; i++) {
		string s = v[i];
		cout << s << endl;
	}

}

void search(vector<string>& v, string word) {
	int n = v.size();
	for (int i = 0; i < n; i++) {
		string s = v[i]; // s="glove"
		int index= s.find(word); // 1
		if (index != -1) {
			cout << s<<endl;
		}
	}
}


int main() {
	vector<string> wordVector;
	ifstream fin("words.txt");
	if (!fin) {
		cout << "open error" << endl;
		return 0;
	}
	int count = 0;
	//���� �б�
	string line;
	while (getline(fin, line)) {
		wordVector.push_back(line);
	}

	cout << count <<  "���� ���� words.txt ������ ��� �о����ϴ�. " << endl;
	
	//echo(wordVector);

	while (true) {
		cout << "�˻��� �ܾ� �Է� >> ";
		string word;
		getline(cin, word); // ������� �ܾ� �Է� 
		if (word == "exit") {
			break; //�ݺ� ����
		}
		search(wordVector, word);
	}

	cout << "���α׷��� �����մϴ�. " << endl;

	fin.close();
}


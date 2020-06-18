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
	//파일 읽기
	string line;
	while (getline(fin, line)) {
		wordVector.push_back(line);
	}

	cout << count <<  "라인 수의 words.txt 파일을 모두 읽었습니다. " << endl;
	
	//echo(wordVector);

	while (true) {
		cout << "검색할 단어 입력 >> ";
		string word;
		getline(cin, word); // 사용자의 단어 입력 
		if (word == "exit") {
			break; //반복 종료
		}
		search(wordVector, word);
	}

	cout << "프로그램을 종료합니다. " << endl;

	fin.close();
}


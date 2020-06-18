#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

#define FILE_PATH "C:\\Users\\mkrice\\Desktop\\words.txt"

int main() {

	int wordCount = 0;
	cout << "---------------------------" << endl;
	cout << "���ݺ��� ��� ������ �����մϴ�." << endl;
	cout << "---------------------------" << endl;

	//���� �о����
	ifstream readFile;
	string str = "";
	readFile.open(FILE_PATH);

	//vector�� �̿��ؼ� '\n' �� �������� �и�
	vector<string> v_str;
	string word;

	while (getline(readFile, word)) {
		v_str.push_back(word);
		wordCount++;
	}
	readFile.close();
	int error = 0;
	bool finish = false;

	while (true) {
	
		// �ܾ ���� ��쿡 ���� ���� ���θ� Ȯ���Ѵ�
		if (finish == true || error==5) {
			char f;
			error = 0;
			cout << "Next(y/n)?";
			cin >> f;
			if (f == 'n') {
				cout << "�����մϴ�." << endl;
				break;
			}
			else {
				finish = false;
				continue;
			}
		}

		//�ܾ ������ ���� ��쿡 ��� Ǯ���� �Ѵ�. 
		else {
			//������ �߻� ���Ѽ� �ܾ �����Ѵ�. 
			srand((unsigned)time(0));
			int n = rand() % wordCount;

			//���� ��������
			string answer = v_str[n];

			//���� ����Ʈ �����Ѵ�. 
			int size = answer.size() - 1;
			int x1 = rand() % size;
			int x2;

			while (true) {
				x2 = rand() % size;
				if (x2 != x1) {
					break;
				}
			}

			//����� �ܾ �����Ѵ�.
			string quizword = answer;
			char c1 = answer.at(x1);
			char c2 = answer.at(x2);

			quizword.replace(x1, 1, "-");
			quizword.replace(x2, 1, "-");

			for (;;) {
			
				string temp;
				char userinput;

				cout << "���� �ܾ� : " << quizword << endl;
				cout << ">> ";
				cin >> userinput;

				if (answer.at(x1) == userinput && quizword.at(x1)=='-') {
					temp = c1;
					quizword.replace(x1, 1, temp);
				}
				else if (answer.at(x2) == userinput && quizword.at(x2) == '-') {
					temp = c2;
					quizword.replace(x2, 1, temp);
				}
				else {
					error++;
					if (error == 5) {
						cout << "5�� ���� �Ͽ����ϴ�. " << endl;
						cout << answer << endl;
						break;
					}
				}

				if (quizword == answer) {
					cout << quizword << endl;
					finish = true;
					break;
				}
			
			}
		}
	}
}


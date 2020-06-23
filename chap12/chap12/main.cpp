#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>
using namespace std;

#define FILE_PATH "C:\\Users\\mkrice\\Desktop\\words.txt"

int main() {
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
	}
	readFile.close();
	int error = 0;
	bool finish = false;
	string temp;
	char userinput;

	
	//���� ��������
	string answer;
	string quizword;
	char c0 = NULL, c1 = NULL, c2 = NULL;
	int x1 = 0, x2 = 0;


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
			else if(f=='y'){
				finish = false;
				continue;
			}
			else {
				cout << "�ٽ� �Է��ϼ���" << endl;
			}
		}

		//�ܾ ������ ���� ��쿡 ��� Ǯ���� �Ѵ�. 
		else {
			//������ �߻� ���Ѽ� �ܾ �����Ѵ�. 
			srand((unsigned)time(0));
			int n = rand() % v_str.size();
			answer = v_str[n];
			quizword = answer;

			if (answer.size() == 1) {
				c0 = answer.at(0);
				quizword.replace(0, 1, "-");

			}

			else {
				//������ �߻� ���Ѽ� �ܾ �����Ѵ�. 
				srand((unsigned)time(0));
				int n = rand() % v_str.size();
				answer = v_str[n];
				quizword = answer;

				//���� ����Ʈ �����Ѵ�. 
				int size = answer.size() - 1;
				x1 = rand() % size;

				while (true) {
					x2 = rand() % size;
					if (x2 != x1) {
						break;
					}
				}


				c1 = answer.at(x1);
				c2 = answer.at(x2);

				quizword.replace(x1, 1, "-");
				quizword.replace(x2, 1, "-");
			}

			for (;;) {
		
					cout << "���� �ܾ� : " << quizword << endl;
					cout << ">> ";
					cin >> userinput;

					if (answer.size() == 1) {
						if (answer.at(0) == userinput && quizword.at(0) == '-') {
							temp = c0;
							quizword.replace(0, 1, temp);
						}
						else {
							error++;
							if (error == 5) {
								cout << "5�� ���� �Ͽ����ϴ�. " << endl;
								cout << answer << endl;
								break;
							}
						}
					}
					else {
						if (answer.at(x1) == userinput && quizword.at(x1) == '-') {
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

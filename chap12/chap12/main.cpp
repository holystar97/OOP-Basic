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
	cout << "지금부터 행맨 게임을 시작합니다." << endl;
	cout << "---------------------------" << endl;

	//파일 읽어오기
	ifstream readFile;
	string str = "";
	readFile.open(FILE_PATH);

	//vector를 이용해서 '\n' 를 기준으로 분리
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
	
		// 단어를 맞춘 경우에 게임 지속 여부를 확인한다
		if (finish == true || error==5) {
			char f;
			error = 0;
			cout << "Next(y/n)?";
			cin >> f;
			if (f == 'n') {
				cout << "종료합니다." << endl;
				break;
			}
			else {
				finish = false;
				continue;
			}
		}

		//단어를 맞추지 않은 경우에 계속 풀도록 한다. 
		else {
			//난수를 발생 시켜서 단어를 생성한다. 
			srand((unsigned)time(0));
			int n = rand() % wordCount;

			//정답 가져오기
			string answer = v_str[n];

			//지울 포인트 지정한다. 
			int size = answer.size() - 1;
			int x1 = rand() % size;
			int x2;

			while (true) {
				x2 = rand() % size;
				if (x2 != x1) {
					break;
				}
			}

			//퀴즈용 단어를 생성한다.
			string quizword = answer;
			char c1 = answer.at(x1);
			char c2 = answer.at(x2);

			quizword.replace(x1, 1, "-");
			quizword.replace(x2, 1, "-");

			for (;;) {
			
				string temp;
				char userinput;

				cout << "문제 단어 : " << quizword << endl;
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
						cout << "5번 실패 하였습니다. " << endl;
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


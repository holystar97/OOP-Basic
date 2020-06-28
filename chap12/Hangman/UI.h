#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>
using namespace std;

class UI {
private:

public:
	UI(); //기본 생성자 
	bool restart();// 재시작 여부 물어보는 기능 
	char input(string quizword); // 퀴즈용 문제제시하고 단어 입력 받을 때 사용하는 기능 
	void fail(string answer); // 제한된 오류 횟수 초과하였을 때 정답과 오류 횟수를 알리는 기능 
};
#endif
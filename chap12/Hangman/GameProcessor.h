#ifndef GAMEPROC_H
#define GAMEPROC_H

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class GameProc {
private:
	vector<string> v; // 단어 모음 벡터
	string answer; //정답
	string quizword; //퀴즈용 단어
	string answerChar1;//정답 첫번째 빈칸
	string answerChar2;//정답 두번째 빈칸
	int hiddenCharIndex1;// 퀴즈용 첫번째 - 문자 인덱스
	int hiddenCharIndex2;// 퀴즈용 두번째 - 문자 인덱스

public:
	GameProc(vector<string> v);

	void makeWord(bool& isAnswerChar1, bool& isAnswerChar2); //퀴즈용 단어 생성 
	void checkChar(char userinput, bool& isAnswerChar1, bool& isAnswerChar2);// 입력글자와 정답글자 비교하기
	string getQuizword() { return quizword; } // UI의 입력 기능에서 문제제시 할 때 사용될 퀴즈 단어 
	string getAnswer() { return answer; } // UI의 오류점검 후 정답 제시 기능에서 사용될 정답 단어 
};

#endif
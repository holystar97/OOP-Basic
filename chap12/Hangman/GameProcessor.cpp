#include "GameProcessor.h"
//생성자 
GameProc::GameProc(vector<string> v)
{
	this->v = v;
}

//퀴즈 단어 생성하기 
void GameProc::makeWord(bool& isAnswerChar1,bool& isAnswerChar2)
{
	int n = rand() % v.size();
	answer = v[n];
	quizword = answer;

	//정답단어가 한 글자일 때 
	if (answer.size() == 1) {
		quizword = '-';
		// 한 글자만 비교할 것이므로 글자2의 정답 비교 변수는 true로 설정
		isAnswerChar1 = false;
		isAnswerChar2 = true; 

	}
	//정답단어가 두 글자 이상일 때 
	else {

		int size = answer.size() - 1;
		//랜덤으로 첫번째 - 자리의 인덱스를 구한다.
		hiddenCharIndex1 = rand() % size;
		// 랜덤으로 두번째 - 자리의 인덱스를 구한다.
		while (true) {
			hiddenCharIndex2 = rand() % size;
			if (hiddenCharIndex2 != hiddenCharIndex1) {
				break;
			}
		}

		// 랜덤 으로 구한 인덱스의 자리에 해당하는 정답을 저장해놓는다.

		answerChar1 = answer.at(hiddenCharIndex1);
		answerChar2 = answer.at(hiddenCharIndex2);

		// 퀴즈용 단어 생성 모양에 맞게 랜덤 인덱스자리에 - 로 변경

		quizword.replace(hiddenCharIndex1, 1, "-");
		quizword.replace(hiddenCharIndex2, 1, "-");

		isAnswerChar1 = false;
		isAnswerChar2 = false;
	}
}
//입력글자와 정답 글자 비교하기 
void GameProc::checkChar(char userinput, bool& isAnswerChar1, bool& isAnswerChar2)
{
	//정답 단어가 한 글자인 경우
	if (answer.size() == 1) {
		if (isAnswerChar1 == false && answer.at(0) == userinput) {
			quizword = answer;
			isAnswerChar1 = true; // 정답 글자1 를 참으로 변경 
		}
	}
	//정답 단어가 두 글자이상인 경우
	else {
		if (isAnswerChar1 == false && answerChar1.at(0) == userinput) {
			quizword.replace(hiddenCharIndex1, 1, answerChar1);
			isAnswerChar1 = true;// 정답 글자1 를 참으로 변경 
		}
		else if (isAnswerChar2 == false && answerChar2.at(0) == userinput) {
			quizword.replace(hiddenCharIndex2, 1, answerChar2);
			isAnswerChar2 = true;// 정답 글자2 를 참으로 변경 
		}
	}
}

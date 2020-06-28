#ifndef HANGMANGAME_H
#define HANGMANGAME_H

#include "UI.h"
#include "GameProcessor.h"
#include "FileStream.h"

class HangmanGame {
private:
	int failCount = 0; //오류 횟수 카운트
	bool isAnswerChar1;//첫번째퀴즈글자 정답 여부
	bool isAnswerChar2;//두번째퀴즈글자 정답 여부
	UI ui;
	GameProc* gameProc; // 생성자에 정답단어들 모음 벡터가 필요하므로 동적할당 
	FileStream* fileStream; // 파일로 부터 단어 저장 후 종료

public:
	HangmanGame();
	~HangmanGame(); //소멸자 
	void play(); //게임 진행
};

#endif


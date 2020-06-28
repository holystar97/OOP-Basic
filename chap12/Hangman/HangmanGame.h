#ifndef HANGMANGAME_H
#define HANGMANGAME_H

#include "UI.h"
#include "GameProcessor.h"
#include "FileStream.h"

class HangmanGame {
private:
	int failCount = 0; //���� Ƚ�� ī��Ʈ
	bool isAnswerChar1;//ù��°������� ���� ����
	bool isAnswerChar2;//�ι�°������� ���� ����
	UI ui;
	GameProc* gameProc; // �����ڿ� ����ܾ�� ���� ���Ͱ� �ʿ��ϹǷ� �����Ҵ� 
	FileStream* fileStream; // ���Ϸ� ���� �ܾ� ���� �� ����

public:
	HangmanGame();
	~HangmanGame(); //�Ҹ��� 
	void play(); //���� ����
};

#endif


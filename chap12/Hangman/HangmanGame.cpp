#include "HangmanGame.h"

//���Ͽ��� ����ܾ�����о�� �� ���� 
HangmanGame::HangmanGame()
{
	//���� ��Ʈ�� �����ϰ� ���� �о� gameProc�� �������ְ� �Ҹ�
	fileStream = new FileStream();
	gameProc = new GameProc(fileStream->openFile("C:\\Users\\mkrice\\Desktop\\words.txt"));
	delete fileStream;
}

HangmanGame::~HangmanGame()
{
	//�����Ҵ� ���� 
	delete gameProc;
}

void HangmanGame::play()
{
	bool isPlay = true;

	while (isPlay) {
		//����� �ܾ� �����ϱ� 
		gameProc->makeWord(isAnswerChar1, isAnswerChar2);
		//Ȯ���ؾ��ϴ� ���� ���� �̸� ���� �ϱ�����
		bool prevAnswer1;
		bool prevAnswer2;

		while (true) {
			//���� ���� ���� ����
			prevAnswer1 = isAnswerChar1;
			prevAnswer2 = isAnswerChar2;

			// �Է��� ���� ���ڰ� ����� �´��� �� 
			gameProc->checkChar(ui.input(gameProc->getQuizword()),isAnswerChar1,isAnswerChar2);
			// �Է��� ���� ���� ��� �¾��� ��� 
			if (isAnswerChar1 && isAnswerChar2) {
				isPlay=ui.restart();
				failCount = 0;
				break;
			}
			// �Է��� ���� ���� ��� Ʋ���� ���
			if (prevAnswer1 == isAnswerChar1 && prevAnswer2 == isAnswerChar2)
			{
				failCount++;
			}
			//�������� �ѵ� �ʰ��� ��� 
			if (failCount >= 5) {
				ui.fail(gameProc->getAnswer());
				isPlay = ui.restart();
				failCount = 0;
				break;
			}
		}
	}
}




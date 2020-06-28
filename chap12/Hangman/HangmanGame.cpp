#include "HangmanGame.h"

//파일에서 정답단어모음읽어온 후 종료 
HangmanGame::HangmanGame()
{
	//파일 스트림 생성하고 파일 읽어 gameProc에 전달해주고 소멸
	fileStream = new FileStream();
	gameProc = new GameProc(fileStream->openFile("C:\\Users\\mkrice\\Desktop\\words.txt"));
	delete fileStream;
}

HangmanGame::~HangmanGame()
{
	//동적할당 해제 
	delete gameProc;
}

void HangmanGame::play()
{
	bool isPlay = true;

	while (isPlay) {
		//퀴즈용 단어 생성하기 
		gameProc->makeWord(isAnswerChar1, isAnswerChar2);
		//확인해야하는 정답 상태 미리 저장 하기위함
		bool prevAnswer1;
		bool prevAnswer2;

		while (true) {
			//이전 정답 상태 저장
			prevAnswer1 = isAnswerChar1;
			prevAnswer2 = isAnswerChar2;

			// 입력한 퀴즈 글자가 정답과 맞는지 비교 
			gameProc->checkChar(ui.input(gameProc->getQuizword()),isAnswerChar1,isAnswerChar2);
			// 입력한 퀴즈 글자 모두 맞았을 경우 
			if (isAnswerChar1 && isAnswerChar2) {
				isPlay=ui.restart();
				failCount = 0;
				break;
			}
			// 입력한 퀴즈 글자 모두 틀렸을 경우
			if (prevAnswer1 == isAnswerChar1 && prevAnswer2 == isAnswerChar2)
			{
				failCount++;
			}
			//오류제한 한도 초과일 경우 
			if (failCount >= 5) {
				ui.fail(gameProc->getAnswer());
				isPlay = ui.restart();
				failCount = 0;
				break;
			}
		}
	}
}




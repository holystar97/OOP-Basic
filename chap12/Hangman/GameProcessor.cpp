#include "GameProcessor.h"
//������ 
GameProc::GameProc(vector<string> v)
{
	this->v = v;
}

//���� �ܾ� �����ϱ� 
void GameProc::makeWord(bool& isAnswerChar1,bool& isAnswerChar2)
{
	int n = rand() % v.size();
	answer = v[n];
	quizword = answer;

	//����ܾ �� ������ �� 
	if (answer.size() == 1) {
		quizword = '-';
		// �� ���ڸ� ���� ���̹Ƿ� ����2�� ���� �� ������ true�� ����
		isAnswerChar1 = false;
		isAnswerChar2 = true; 

	}
	//����ܾ �� ���� �̻��� �� 
	else {

		int size = answer.size() - 1;
		//�������� ù��° - �ڸ��� �ε����� ���Ѵ�.
		hiddenCharIndex1 = rand() % size;
		// �������� �ι�° - �ڸ��� �ε����� ���Ѵ�.
		while (true) {
			hiddenCharIndex2 = rand() % size;
			if (hiddenCharIndex2 != hiddenCharIndex1) {
				break;
			}
		}

		// ���� ���� ���� �ε����� �ڸ��� �ش��ϴ� ������ �����س��´�.

		answerChar1 = answer.at(hiddenCharIndex1);
		answerChar2 = answer.at(hiddenCharIndex2);

		// ����� �ܾ� ���� ��翡 �°� ���� �ε����ڸ��� - �� ����

		quizword.replace(hiddenCharIndex1, 1, "-");
		quizword.replace(hiddenCharIndex2, 1, "-");

		isAnswerChar1 = false;
		isAnswerChar2 = false;
	}
}
//�Է±��ڿ� ���� ���� ���ϱ� 
void GameProc::checkChar(char userinput, bool& isAnswerChar1, bool& isAnswerChar2)
{
	//���� �ܾ �� ������ ���
	if (answer.size() == 1) {
		if (isAnswerChar1 == false && answer.at(0) == userinput) {
			quizword = answer;
			isAnswerChar1 = true; // ���� ����1 �� ������ ���� 
		}
	}
	//���� �ܾ �� �����̻��� ���
	else {
		if (isAnswerChar1 == false && answerChar1.at(0) == userinput) {
			quizword.replace(hiddenCharIndex1, 1, answerChar1);
			isAnswerChar1 = true;// ���� ����1 �� ������ ���� 
		}
		else if (isAnswerChar2 == false && answerChar2.at(0) == userinput) {
			quizword.replace(hiddenCharIndex2, 1, answerChar2);
			isAnswerChar2 = true;// ���� ����2 �� ������ ���� 
		}
	}
}

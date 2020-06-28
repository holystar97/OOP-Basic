#ifndef GAMEPROC_H
#define GAMEPROC_H

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class GameProc {
private:
	vector<string> v; // �ܾ� ���� ����
	string answer; //����
	string quizword; //����� �ܾ�
	string answerChar1;//���� ù��° ��ĭ
	string answerChar2;//���� �ι�° ��ĭ
	int hiddenCharIndex1;// ����� ù��° - ���� �ε���
	int hiddenCharIndex2;// ����� �ι�° - ���� �ε���

public:
	GameProc(vector<string> v);

	void makeWord(bool& isAnswerChar1, bool& isAnswerChar2); //����� �ܾ� ���� 
	void checkChar(char userinput, bool& isAnswerChar1, bool& isAnswerChar2);// �Է±��ڿ� ������� ���ϱ�
	string getQuizword() { return quizword; } // UI�� �Է� ��ɿ��� �������� �� �� ���� ���� �ܾ� 
	string getAnswer() { return answer; } // UI�� �������� �� ���� ���� ��ɿ��� ���� ���� �ܾ� 
};

#endif
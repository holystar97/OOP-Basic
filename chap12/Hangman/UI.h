#ifndef UI_H
#define UI_H

#include <iostream>
#include <string>
using namespace std;

class UI {
private:

public:
	UI(); //�⺻ ������ 
	bool restart();// ����� ���� ����� ��� 
	char input(string quizword); // ����� ���������ϰ� �ܾ� �Է� ���� �� ����ϴ� ��� 
	void fail(string answer); // ���ѵ� ���� Ƚ�� �ʰ��Ͽ��� �� ����� ���� Ƚ���� �˸��� ��� 
};
#endif
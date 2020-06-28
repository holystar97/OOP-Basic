#include "UI.h"
// 생성될 때 한번만 보이도록 하기 위함
UI::UI()
{
	cout << "---------------------------" << endl;
	cout << "지금부터 행맨 게임을 시작합니다." << endl;
	cout << "---------------------------" << endl;

}
// 재시작 여부 물어보는 기능 
bool UI::restart()
{
	char f;
	while (true) {

		cout << "Next(y/n)?";
		cin >> f;
		if (f == 'n') {
			cout << "종료합니다." << endl;
			return false;
		}
		else if (f == 'y') {
			return true;
		}
		else {
			cout << "다시 입력하세요" << endl;
		}
	}
	return false;
}
// 퀴즈용 문제제시하고 단어 입력 받을 때 사용하는 기능 
char UI::input(string quizword)
{
	char userinput;
	cout << "문제 단어 : " << quizword << endl;
	cout << ">> ";
	cin >> userinput;

	// char 가 한 글자 이상 받아지는 경우 버퍼에 남아있는것을 지워주기 위함
	cin.clear(); 
	cin.ignore(256, '\n');

	return userinput;
}
// 제한된 오류 횟수 초과하였을 때 오류 횟수와 정답을 알리는 기능 
void UI::fail(string answer)
{
	cout << "5번 실패 하였습니다. " << endl;
	cout << answer << endl;
}

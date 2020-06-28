#include "UI.h"
// ������ �� �ѹ��� ���̵��� �ϱ� ����
UI::UI()
{
	cout << "---------------------------" << endl;
	cout << "���ݺ��� ��� ������ �����մϴ�." << endl;
	cout << "---------------------------" << endl;

}
// ����� ���� ����� ��� 
bool UI::restart()
{
	char f;
	while (true) {

		cout << "Next(y/n)?";
		cin >> f;
		if (f == 'n') {
			cout << "�����մϴ�." << endl;
			return false;
		}
		else if (f == 'y') {
			return true;
		}
		else {
			cout << "�ٽ� �Է��ϼ���" << endl;
		}
	}
	return false;
}
// ����� ���������ϰ� �ܾ� �Է� ���� �� ����ϴ� ��� 
char UI::input(string quizword)
{
	char userinput;
	cout << "���� �ܾ� : " << quizword << endl;
	cout << ">> ";
	cin >> userinput;

	// char �� �� ���� �̻� �޾����� ��� ���ۿ� �����ִ°��� �����ֱ� ����
	cin.clear(); 
	cin.ignore(256, '\n');

	return userinput;
}
// ���ѵ� ���� Ƚ�� �ʰ��Ͽ��� �� ���� Ƚ���� ������ �˸��� ��� 
void UI::fail(string answer)
{
	cout << "5�� ���� �Ͽ����ϴ�. " << endl;
	cout << answer << endl;
}

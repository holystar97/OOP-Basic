#ifndef UI_H
#define UI_H

#include <string>
using namespace std;

class UI {
public:
	static int getMainMenu();
	static int getSubMenu();
	static bool getSeatNo(int& no);
	static string getUserName();
};

#endif
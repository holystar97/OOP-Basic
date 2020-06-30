#include <iostream>
#include <vector>

using namespace std;

class Shape
{
public:
	virtual void Draw() = 0;
};

class Line : public Shape
{
public:
	void Draw() override
	{
		cout << "Line";
	}
};

class Circle : public Shape
{
public:
	void Draw() override
	{
		cout << "Circle";
	}
};

class Rectangle : public Shape
{
public:
	void Draw() override
	{
		cout << "Rectangle";
	}
};

void PrintAllShape(vector<Shape*> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << i << " : ";
		vec[i]->Draw();
		cout << endl;
	}
}

void AddShape(vector<Shape*>& vec)
{
	int n = 0;
	while (n == 0)
	{
		cout << "1 : 선\n2 : 원\n3 : 사각형\n4 : 취소" << endl << ">>";
		cin >> n;
		switch (n)
		{
		case 1:
			vec.push_back(new Line());
			break;
		case 2:
			vec.push_back(new Circle());
			break;
		case 3:
			vec.push_back(new Rectangle());
			break;
		case 4:
			break;
		default:
			system("cls");
			cout << "알맞은 번호를 입력해주세요" << endl;
			n = 0;
			break;
		}
	}
}

void DeleteShape(vector<Shape*>& vec)
{
	if (vec.size() == 0)
	{
		cout << "삭제할 도형이 없습니다." << endl;

		return;
	}

	PrintAllShape(vec);

	int index = 0;
	while (true)
	{
		cout << "(-1 : 취소)\n삭제할 인덱스를 입력해주세요 : ";
		cin >> index;

		if (index == -1)
		{
			break;
		}
		else if (index >= vec.size() || index < 0)
		{
			system("cls");
			PrintAllShape(vec);
			cout << "잘못된 인덱스입니다." << endl;
			continue;
		}
		else
		{
			system("cls");
			cout << index << "번 ";
			vec[index]->Draw();
			cout << " 삭제" << endl;
			vec.erase(vec.begin() + index);
			break;
		}
	}
}

int main()
{
	vector<Shape*> vec;

	int n = 0;
	while (n != 4)
	{
		cout << "//////////////////" << endl;
		cout << "1 : 추가\n2 : 삭제\n3 : 모두보기\n4 : 종료" << endl;
		cout << "//////////////////" << endl;
		cin >> n;

		switch (n)
		{
		case 1:
			system("cls");
			AddShape(vec);
			break;
		case 2:
			system("cls");
			DeleteShape(vec);
			break;
		case 3:
			system("cls");
			PrintAllShape(vec);
			break;
		case 4:
			system("cls");
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			break;
		}
	}
	
	for (int i = 0; i < vec.size(); i++)
	{
		delete vec[i];
		vec[i] = nullptr;	// 댕글링 포인터 방지
	}

	return 0;
}

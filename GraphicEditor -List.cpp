#include <iostream>

using namespace std;

class Shape
{
public:
	virtual void Draw() = 0;

	Shape* GetNext()
	{
		return next;
	}

	void SetNext(Shape* next)
	{
		this->next = next;
	}

private:
	Shape* next = nullptr;

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

// 도형 관리자 - 리스트방식
class ShapeManager
{
public:
	~ShapeManager();

	void AddShape();
	void DeleteShape();
	void PrintAllShape();
	void DeleteAllShape();

private:
	Shape* pStart = nullptr;
	Shape* pLast = nullptr;
	int count = 0;

};

ShapeManager::~ShapeManager()
{
	DeleteAllShape();
}

void ShapeManager::AddShape()
{
	int n = 0;
	Shape* temp = nullptr;
	while (n == 0)
	{
		cout << "1 : 선\n2 : 원\n3 : 사각형\n4 : 취소" << endl << ">>";
		cin >> n;
		switch (n)
		{
		case 1:
			temp = new Line();
			break;
		case 2:
			temp = new Circle();
			break;
		case 3:
			temp = new Rectangle();
			break;
		case 4:
			return;
		default:
			system("cls");
			cout << "알맞은 번호를 입력해주세요" << endl;
			n = 0;
			break;
		}

		if (pStart == nullptr)
		{
			pStart = temp;
			pLast = temp;
		}
		else
		{
			pLast->SetNext(temp);
			pLast = temp;
		}
	}

	count++;
}

void ShapeManager::DeleteShape()
{
	if (pStart != nullptr)
	{
		int index;
		int temp;
		PrintAllShape();

		while (true)
		{
			cout << "(-1 : 취소)\n삭제할 인덱스를 입력해주세요 : ";
			cin >> index;
			temp = index;

			if (index == -1)	// 취소
			{
				return;
			}
			else if (index >= count || index < 0)	// 인덱스 범위에서 벗어날 경우
			{
				system("cls");
				PrintAllShape();
				cout << "잘못된 인덱스 입니다." << endl;
			}
			else    // 정상 삭제 진행
			{
				break;
			}
		}

		// start부터 시작하여 해당 인덱스의 이전 노드와 지울 노드를 찾음
		// 포인터로 생각한 ex) index가 2일 때 이전 노드는 pStart + 1 현재 노드는 pStart + 2
		Shape* prev = pStart;
		Shape* del = nullptr;
		if (index == 0)	// 시작 부분을 지울 경우 노드를 찾을 필요가 없음
		{
			del = pStart;
		}
		else
		{
			// 지울 노드의 이전 노드 탐색
			while (--index > 0)
			{
				prev = prev->GetNext();
			}

			// 이전 노드의 다음 노드를 지울 노드로 설정
			del = prev->GetNext();
		}

		// 지울 노드가 시작 부분일 때
		if (del == pStart)
		{
			pStart = pStart->GetNext();
		}
		else if (del == pLast)	// 지울 노드가 맨 끝 노드일 경우
		{
			pLast = prev;
			pLast->SetNext(nullptr);
		}
		else    // 그 외엔 중간 노드를 지우므로 지울 노드의 연결을 리스트에서 끊음
		{
			prev->SetNext(del->GetNext());	// 이전 노드가 가리키는 곳을 지울 노드가 가리키는 노드로 설정
		}

		// 시작부분이 null이면 끝부분도 null
		if (pStart == nullptr)
		{
			pLast = nullptr;
		}
		
		system("cls");
		cout << temp << "번 ";
		del->Draw();
		cout << "삭제" << endl;

		delete del;
		del = nullptr;

		count--;
	}
	else
	{
		system("cls");
		cout << "삭제할 도형이 없습니다." << endl;
	}
}

void ShapeManager::PrintAllShape()
{
	if (pStart == nullptr)
	{
		cout << "도형이 없습니다." << endl;
	}

	Shape* temp = pStart;
	int i = 0;
	while (temp != nullptr)
	{
		cout << i++ << " : ";
		temp->Draw();
		cout << endl;
		temp = temp->GetNext();
	}
}

void ShapeManager::DeleteAllShape()
{
	Shape* temp = nullptr;
	while (pStart != nullptr)
	{
		temp = pStart;
		pStart = pStart->GetNext();

		delete temp;
		temp = nullptr;
	}

	pStart = nullptr;
	pLast = nullptr;
}

int main()
{
	ShapeManager manager;

	int n = 0;
	while (n != 4)
	{
		// 메뉴 화면
		cout << "//////////////////" << endl;
		cout << "1 : 추가\n2 : 삭제\n3 : 모두보기\n4 : 종료" << endl;
		cout << "//////////////////" << endl;
		cin >> n;

		switch (n)
		{
		case 1:	// 도형 추가
			system("cls");
			manager.AddShape();
			break;
		case 2:	// 도형 삭제
			system("cls");
			manager.DeleteShape();
			break;
		case 3:	// 모든 도형 출력
			system("cls");
			manager.PrintAllShape();
			break;
		case 4:	// 종료
			system("cls");
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}


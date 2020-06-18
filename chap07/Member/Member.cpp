#include <iostream>
using namespace std;

class Member {
	string name[2]; // "남","여"
	int total[2]; //  total[0]에는 남자 회원수, total[1]에는 여자 회원수 
public:
	Member();
	Member& arrive(string gender, int n);
	void count(string gender, int& n);
	void count(int& n);
};

Member::Member() {
	name[0] = "남";
	name[1] = "여";
	total[0] = total[1] = 0;
}

Member& Member::arrive(string gender, int n) {
	if (name[0] == gender) {
		total[0] += n;
	}
	else if (name[1]==gender){
		total[1] += n;
	}
	return *this;
}

void Member::count(string gender, int& n) {
	if (name[0] == gender) {
		n = total[0];
	}
	else if (name[1] == gender) {
		n = total[1];
	}
}

void Member::count(int& n) {
	n = total[0] + total[1];
}

int main() {
	Member m;
	m.arrive("남", 3).arrive("여", 6).arrive("남", 9);
	m.arrive("여", 12);
	int n = 0;
	m.count("남", n);
	cout << "남자의 수는" << n << "명" << endl;
	m.count("여", n);
	cout << "여자의 수는" << n << "명" << endl;
	m.count(n);
	cout << "전체 회원 수는" << n << "명" << endl;
}
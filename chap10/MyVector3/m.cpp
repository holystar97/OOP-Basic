#include <iostream>
#include <vector>
using namespace std;

void showAll(vector <int>  v)
{
	vector<int> ::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	
}

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	showAll(v);
	vector<int> ::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		int n = *it;
		n = n * 2;
		*it = n;
	}

	showAll(v);

}
#ifndef FILESTREAM_H
#define FILESTREAM_H

#include <fstream>
#include <vector>
#include <string>
using namespace std;

class FileStream {
private:
	ifstream readFile;

public:
	//���� ���� ���� �� �ܾ� ���Ϳ� ��ȯ�ϱ�
	vector<string> openFile(string fileName);

};
#endif


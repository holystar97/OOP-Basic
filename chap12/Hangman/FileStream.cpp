#include "FileStream.h"
//���� ���� ���� �� �ܾ ���Ϳ� �����ϱ�
vector<string>  FileStream::openFile(string fileName)
{
	vector<string> v;
	string word;
	readFile.open(fileName);

	while (getline(readFile, word)) {
		v.push_back(word);
	}
	readFile.close();

	return v;
}

#include "FileStream.h"
//파일 열고 파일 내 단어를 벡터에 저장하기
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

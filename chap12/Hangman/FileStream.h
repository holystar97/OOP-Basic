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
	//파일 열고 파일 내 단어 벡터에 반환하기
	vector<string> openFile(string fileName);

};
#endif


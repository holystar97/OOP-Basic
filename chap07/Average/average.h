#ifndef AVERAGE_H
#define AVERAGE_H

class Average {
	int n[100]; // 100개 정수 저장 
	int index; // 저장할 위치 0부터 시작 
public:
	Average();
	void put(int x);
	void showAll();
	double getAverage();

};
#endif
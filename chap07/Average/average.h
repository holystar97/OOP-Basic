#ifndef AVERAGE_H
#define AVERAGE_H

class Average {
	int n[100]; // 100�� ���� ���� 
	int index; // ������ ��ġ 0���� ���� 
public:
	Average();
	void put(int x);
	void showAll();
	double getAverage();

};
#endif
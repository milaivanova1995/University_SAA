#pragma once
class Exercise1
{
public:
	Exercise1();
	~Exercise1();
private:
	int** fillMatrix();
	bool isQuadratic(int**, int);
	void printMatrix(int**); 
public:
	void printResult();
};


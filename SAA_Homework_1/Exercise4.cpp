#include "Exercise4.h"
#include<iostream>
using namespace std;

Exercise4::Exercise4()
{
}


Exercise4::~Exercise4()
{
}


int* Exercise4:: fillArray() {
	cout << "Enter the len of the array:" << endl;
	int len;
	cin >> len;
	cout << "Enter the elements of the array:" << endl;
	int * array = NULL;
	array = new int[len];
	for (int i = 0; i < len; i++) {
		cin >> array[i];
	}
	return array;
}

bool Exercise4::checkArray(int array[]) {
	for (int i = 0; i < sizeof(array) / 4; i++) {
		if (array[i - 1] < array[i]) {
			return 1;
		}
	}
	return 0;
}


void Exercise4::printResult() {
	int* array = fillArray();
	bool isCorrectRow = checkArray(array);
	cout << "Result: " << isCorrectRow << endl;
}
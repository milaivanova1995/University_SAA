#include "Exercise8.h"
#include<iostream>
using namespace std;

Exercise8::Exercise8()
{
}


Exercise8::~Exercise8()
{
}


int* Exercise8::fillArray(int len) {
	int * array = NULL;
	array = new int[len];
	for (int i = 0; i < len; i++) {
		cin >> array[i];
	}
	return array;
}

void Exercise8::reverseArray(int array[], int len) {
	int num;
	if (len > 0) {
		num = len - 1;
		cout << "\t" << array[num];
		reverseArray(array, num);
	}
}


void Exercise8::printResult() {
	cout << "Enter the len of the array:" << endl;
	int len;
	cin >> len;
	cout << "Enter the elements of the array:" << endl;
	int* array = fillArray(len);
	reverseArray(array, len);
}
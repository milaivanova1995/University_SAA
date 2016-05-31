#include "Exercise5.h"
#include<iostream>
using namespace std;

Exercise5::Exercise5()
{
}


Exercise5::~Exercise5()
{
}


int* Exercise5::fillArray(int len) {
	int * array = NULL;
	array = new int[len];
	for (int i = 0; i < len; i++) {
		cin >> array[i];
	}
	return array;
}

int* Exercise5::descBubbleSort(int array[], int len) {
	int swap;
	for (int i = 0; i < (len - 1); i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
			}
		}
	}
	return array;
}

void Exercise5::printResult() {
	cout << "Enter the len of the array:" << endl;
	int len;
	cin >> len;
	cout << "Enter the elements of the array:" << endl;
	int* array = fillArray(len);
	int* sortedArray = descBubbleSort(array, len);
	cout << "Zeros to the back: " << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "\tValue at " << i << " index: " << sortedArray[i] << endl;
	}
}
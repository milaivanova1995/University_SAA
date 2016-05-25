#include "Exercise2.h"
#include<iostream>
using namespace std;

Exercise2::Exercise2()
{
}


Exercise2::~Exercise2()
{
}


int** Exercise2::fillMatrix() {
	cout << "Enter the elements of the matrix /each element must be different/:" << endl;
	int** matrix = 0;
	int i = 0, j = 0;
	matrix = new int*[3];

	for (int i = 0; i < 3; i++) {
		matrix[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			cin >> matrix[i][j];
		}
	}
	
	return matrix;
}

int Exercise2::findElement(int** matrix) {
	int row = 3;
	int min, m;
	for (int i = 0; i < row; i++) {
		min = matrix[i][0];
		for (int j = 1; j < row; j++) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
		}
		for (int j = 0; j < row; j++) {
			if (min == matrix[i][j]) {
				for (m = 0; m < row; m++) {
					if (min < matrix[m][j])
						break;
				}
				if (m == row)
					return min;
			}
		}

	}
	return -1;
}


void Exercise2::printResult() {
	int** matrix = fillMatrix();
	int value = findElement(matrix);
	cout << "Result: " << value << endl;
}


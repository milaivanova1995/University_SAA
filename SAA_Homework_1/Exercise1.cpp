#include "Exercise1.h"
#include<iostream>
using namespace std;

Exercise1::Exercise1()
{
}


Exercise1::~Exercise1()
{
}


int** Exercise1::fillMatrix() {
	cout << "Enter the element of the matrix:" << endl;
	int** matrix = 0;
	matrix = new int*[3];
	for (int i = 0; i < 3; i++) {
		matrix[i] = new int[3];
		for (int j = 0; j < 3; j++) {
			cin >> matrix[i][j];
		}
	}
	return matrix;
}

bool Exercise1::isQuadratic(int** matrix, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 1; j < size - 1; j++) {
			if (matrix[i][j] != matrix[i][j - 1]) {
				return false;
			}
		}
	}
	return true;
}

void Exercise1::printMatrix(int** matrix) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << " " << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Exercise1::printResult() {
	int** matrix = fillMatrix();
	bool flag = isQuadratic(matrix, 3);
	printMatrix(matrix);

	if (flag != true) {
		cout << "The matrix isn't quadratic." << endl;
	}
	else {
		cout << "The matrix is quadratic." << endl;
	}
}

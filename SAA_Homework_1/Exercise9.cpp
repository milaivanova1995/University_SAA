#include "Exercise9.h"
#include<iostream>
using namespace std;


Exercise9::Exercise9()
{
}


Exercise9::~Exercise9()
{
}


int Exercise9::getDigitsSum(int number, int sum) {
	if (number < 10 || number > 10000) {
		if (number == 0) {
			return sum;
		}
		else {
			sum = sum + (number % 10);
			number = number / 10;
			return getDigitsSum(number, sum);
		}
	}
	return -1;
}

void Exercise9::printResult() {
	int number, sum = 0;
	cout << "Enter a number between 10 - 10000" << endl;
	cin >> number;
	sum = getDigitsSum(number, sum);
	cout << "The sum of the digits is: " << sum;
}
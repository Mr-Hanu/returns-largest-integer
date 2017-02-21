#include "stdafx.h"
#include <iostream>

int inputValue()
{
	std::cout << "Please enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

int compareValue(int a, int b)
{
	if (a > b)
		return a;
	if (b > a)
		return b;

	return 0;
}

void printResult(int results)
{
	std::cout << "The largest integer is: " << results << std::endl;
}

int main()
{
	int x = inputValue();
	int y = inputValue();
	int result = compareValue(x, y);
	printResult(result);
	return 0;
}
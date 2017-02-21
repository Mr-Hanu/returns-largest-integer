#include "stdafx.h"
#include <iostream>

int inputValue()
{
	std::cout << "Please enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

int compareValue(int a, int b, int c, int d)
{
	if (a > b && a > c && a > d)
		return a;
	if (b > a && b > d && b > c)
		return b;
	if (c > a && c > b && c > d)
		return c;
	if (d > a && d > b && d > c)
		return d;

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
	int z = inputValue();
	int i = inputValue();
	int result = compareValue(x, y, z, i);
	printResult(result);
	return 0;
}


// Factors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <list>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int number;
	cout << "Enter number\n";
	cin >> number;

	list<int> factors;

	int squareRoot = sqrt((float)number);

	for (int i = 1; i <= squareRoot; i++)
	{
		if (number % i == 0)
		{
			factors.push_back(i);
			factors.push_back(number/i);
		}
	}

	factors.sort();

	cout << "factors of " << number << " are:\n";

	for (list<int>::iterator iter = factors.begin();  iter != factors.end(); iter++)
	{
		cout << *iter << endl;
	}

	return 0;
}


// 复习题3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	double x;
	cout << "Enter value: ";
	while (!(cin >> x))
	{
		cout << "Bad input. Please enter a number: ";
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
	}
	cout << "Value = " << x << endl;
	getchar();
	getchar();
    return 0;
}


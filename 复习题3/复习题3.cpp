// ��ϰ��3.cpp : �������̨Ӧ�ó������ڵ㡣
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


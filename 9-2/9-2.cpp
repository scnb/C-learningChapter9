// 9-2.cpp : �������̨Ӧ�ó������ڵ㡣
//��һ�������ֳ�3���ӳ�����е�������
//���ļ�����������

#include "stdafx.h"
#include <iostream>
#include "coordin.h"
using namespace std;

int main()
{
	rect rplace;
	polar pplace;
	cout << "enter the x and y values:";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rec_to_polar(rplace);
		show_polar(pplace);
		cout << "enter the next two numbers(q to quit):";
	}
	cout << "Bye\n";
    return 0;
}


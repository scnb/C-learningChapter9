// 9-2.cpp : 定义控制台应用程序的入口点。
//将一个程序拆分成3个子程序进行单独编译
//该文件中是主函数

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


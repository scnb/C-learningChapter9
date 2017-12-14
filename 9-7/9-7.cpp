// 9-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
int tom = 3;//外部变量
int dick = 30;//外部变量
static int harry = 300;//内部静态变量，专属于9-7

void remote_access();

int main()
{
	using namespace std;
	cout << "main() reports the following address:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry.\n";
	remote_access();
	getchar();
    return 0;
}


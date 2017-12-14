// 9-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
extern double warming;//使用另一个文件中定义的变量，即引用
void update(double dt);
void local();

//using std::cout;

void update(double dt)
{
	extern double warming;//通过这个名称使用在外部定义的变量
	warming += dt;
	cout << "Update global warming to " << warming;
	cout << " degrees.\n";
}

void local()
{
	double warming = 0.8;
	cout << "Local warming = " << warming << " degrees.\n";
	cout << "But global warming = " << ::warming;
	cout << " degrees.\n";
}

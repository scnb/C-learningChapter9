// 9-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
double warming = 0.3;//�ⲿ����
void update(double dt);
void local();

int main()
{
	cout << "Gloabl warming is " << warming << " degrees.\n";
	update(0.1);
	cout << "Global warming is " << warming << " degrees.\n";
	local();
	cout << "Global warming is " << warming << " degrees.\n";
	getchar();
    return 0;
}


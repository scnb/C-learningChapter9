// 9-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
extern double warming;//ʹ����һ���ļ��ж���ı�����������
void update(double dt);
void local();

//using std::cout;

void update(double dt)
{
	extern double warming;//ͨ���������ʹ�����ⲿ����ı���
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

// 9-7.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
int tom = 3;//�ⲿ����
int dick = 30;//�ⲿ����
static int harry = 300;//�ڲ���̬������ר����9-7

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


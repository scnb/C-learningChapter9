// 9-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
const int Arsize = 10;
void strcount(const char * str);

int main()
{
	char input[Arsize];
	char next;
	cout << "Enter a line:\n";
	cin.get(input, Arsize);
	while(cin)//�������Ҫ��
	{
		cin.get(next);//��ȡ��һ���ַ�
		while (next != '\n')//�ж���һ����ȡ���ַ��������ǻ��з���ʱ��ͽ���ѭ��
		{
			cin.get(next);//��һ��while����Ϊ��������һ�������:��������ַ�����������ĳ��ȣ�ͨ����һ��ѭ�����ѳ����Ĳ���ȫ��ɾ��
		}
		strcount(input);
		cout << "Enter next line(empty line to quit):\n";
		cin.get(input, Arsize);
	}
	cout << "Bye\n";
    return 0;
}

void strcount(const char * str)
{
	static int total = 0;
	int count = 0;
	cout << "\"" << str << "\" contains ";
	while (*str++)
	{
		count++;
	}
	total = total + count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}

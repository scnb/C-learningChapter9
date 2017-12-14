// 9-9.cpp : 定义控制台应用程序的入口点。
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
	while(cin)//输入符合要求
	{
		cin.get(next);//读取下一个字符
		while (next != '\n')//判断上一步读取的字符，当不是换行符的时候就进入循环
		{
			cin.get(next);//这一个while就是为了在这样一种情况下:即输入的字符数大于数组的长度，通过这一个循环来把超出的部分全都删掉
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

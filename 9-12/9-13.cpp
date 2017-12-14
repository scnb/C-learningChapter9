#include "stdafx.h"
#include <iostream>

#include "9-11.h"

void other(void);
void another(void);

int main()
{
	using debts::Debt;
	using debts::showDebt;
	Debt golf =
	{
		{"Benny","Goatsniff"},
		120.0,
	};
	showDebt(golf);
	other();
	another();
	getchar();
	getchar();
	return 0;
}

void other()
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodles","Glister" };   //Person的名称空间没有在该函数中被声明？因为在debts中已经using了pers
	showPerson(dg);
	cout << endl;
	Debt zippy[3];         //定义一个结构体数组，即数组成员是结构体
	int i;
	for (i = 0;i < 3;i++)  //一个一个的输入结构体
	{
		getDebt(zippy[i]);
	}
	for (i = 0;i < 3;i++)  //一个一个的输出结构体
	{
		showDebt(zippy[i]);
	}
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}

void another()
{
	using pers::Person;
	Person collector = { "Milo","Rightshift" };
	pers::showPerson(collector);
	std::cout << std::endl;//因为没有使用using namespace std；所以需要用作用域解析运算符来使用cout和endl
}
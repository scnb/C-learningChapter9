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
	Person dg = { "Doodles","Glister" };   //Person�����ƿռ�û���ڸú����б���������Ϊ��debts���Ѿ�using��pers
	showPerson(dg);
	cout << endl;
	Debt zippy[3];         //����һ���ṹ�����飬�������Ա�ǽṹ��
	int i;
	for (i = 0;i < 3;i++)  //һ��һ��������ṹ��
	{
		getDebt(zippy[i]);
	}
	for (i = 0;i < 3;i++)  //һ��һ��������ṹ��
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
	std::cout << std::endl;//��Ϊû��ʹ��using namespace std��������Ҫ������������������ʹ��cout��endl
}
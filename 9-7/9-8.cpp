#include "stdafx.h"
#include <iostream>
extern int tom;//����9-7�е�tom
static int dick = 10;//��̬�ڲ���������9-7�е�dick����ͻ
int harry = 200;//�ⲿ��������9-7�е�harry����ͻ

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the follwing addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry.\n";
}
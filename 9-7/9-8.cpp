#include "stdafx.h"
#include <iostream>
extern int tom;//引用9-7中的tom
static int dick = 10;//静态内部变量，与9-7中的dick不冲突
int harry = 200;//外部变量，与9-7中的harry不冲突

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the follwing addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry.\n";
}
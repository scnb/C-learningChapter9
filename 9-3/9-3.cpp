// 9-3.cpp : 定义控制台应用程序的入口点。
//9-2.cpp中包含的两个函数

#include "stdafx.h"
#include <cmath>
#include <iostream>
#include "9-1.h"
using namespace std;

polar rec_to_polar(rect xypos)
{
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	const double Rad_to_deg = 57.29577951;
	cout << "distance = " << dapos.distance << endl;
	cout << "angle  = " << dapos.angle*Rad_to_deg <<" degrees"<< endl;
}
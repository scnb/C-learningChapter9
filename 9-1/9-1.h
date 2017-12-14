// 9-1.h : 结构模板和函数原型。
//

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
	double distance;
	double angle;
};

struct rec //直角坐标系
{
	double x;
	double y;
};

polar rec_to_polar(rect xypos);
void show_polar(polar dapos);

#endif


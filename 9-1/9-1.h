// 9-1.h : �ṹģ��ͺ���ԭ�͡�
//

#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
	double distance;
	double angle;
};

struct rec //ֱ������ϵ
{
	double x;
	double y;
};

polar rec_to_polar(rect xypos);
void show_polar(polar dapos);

#endif


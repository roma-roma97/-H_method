#include <iostream>
#include <cmath>
#include <vector>
#include "stdlib.h"


struct Point
{
	int num;
	long double xn, v1, v2, u1, u2; //
	long double v22, v21, v115, v215; // v удвоенное и v+1/2
	long double er, er1, er2;
	double h;
	Point()
	{
		num = 0;
		xn = v1 = v2 = u2 = u1 = v21 = v22 = v115 = v215 = er = er1 = er2 = 0;
		h = 0.1;
	}
};

inline long double max(long double x1, long double x2)
{
	if (x1 > x2)
		return x1;
	return x2;
}

inline long double FV1(long double x, long double v1, long double v2)
{
	return -500.005 * v1 + 499.995 * v2;
}

inline long double FV2(long double x, long double v1, long double v2)
{
	return -500.005 * v2 + 499.995 * v1;
}


//inline long double RK4_1(long double x, long double v1, long double v2,double h)
//{
//	long double V; // Vn+1
//	
//	double k1 = x + h;
//	double k2 = v1 + h * FV1(x, v1, v2);
//	double k3 = v2 + h * FV2(x, v1, v2);
//
//	V = v1 + (h / 2) * (FV1(x, v1, v2) + FV1(k1, k2, k3));
//	
//	return V;
//}
//
//inline double RK4_2(long double x, long double v1, long double v2, double h)
//{
//	long double V; // Vn+1
//
//	double k1 = x + h;
//	double k2 = v1 + h * FV1(x, v1, v2);
//	double k3 = v2 + h * FV2(x, v1, v2);
//
//	V = v2 + (h / 2) * (FV2(x, v1, v2) + FV2(k1, k2, k3));
//
//	return V;
//}

inline long double RK4_1(long double x, long double v1, long double v2, double h)
{
	long double V; // Vn+1
	double k = FV1(x, v1, v2) / (1 + (h / 2) * 0.01);

	V = v1 + h * k;

	return V;
}

inline double RK4_2(long double x, long double v1, long double v2, double h)
{
	long double V; // Vn+1
	double k = FV2(x, v1, v2) / (1 + (h / 2) * 0.01);

	V = v2 + h * k;

	return V;
}


inline std::vector<Point> StartMethodBasic(int n, Point p0)
{
	std::vector<Point> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	Point p;
	while (i < n + 1)
	{
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		p.v1 = RK4_1(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h);
		p.v2 = RK4_2(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h);
		p.u1 = 10 * exp(-0.01 * p.xn) - 3 * exp(-1000 * p.xn);
		p.u2 = 10 * exp(-0.01 * p.xn) + 3 * exp(-1000 * p.xn);
		p.er1 = p.v1 - p.u1;
		p.er2 = p.v2 - p.u2;
		p.er = max(abs(p.u1), abs(p.u2)) - max(abs(p.v1), abs(p.v2));
		points.push_back(p);
		i++;
	}
	return points;
}



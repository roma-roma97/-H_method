#pragma once

#include <iostream>
#include <cmath>
#include <vector>


struct Point
{
	int num;
	double u;
	double xn, vn; //
	double Gerror;
	double v2, v15; // v удвоенное и v+1/2
	double S, er;
	double h;
	Point()
	{
		num = 0;
		u = xn = vn = Gerror = v2 = v15 = S = er = 0;
		h = 0.1;
	}
};

double RK4_Test(double Xn, double Un, double hn);  // метод для тестовой задачи

double RK4_BASIC(double Xn, double Vn, double hn, double a, double s);// метод для основной задачи

std::vector<Point> StartMethodTest(int n, Point p0);

std::vector<Point> StartMethodBasic(int n, Point p0, double a, double s);
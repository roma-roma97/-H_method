#include <iostream>
#include <cmath>
#include <vector>

struct PPaint
{
	int num;
	double u;
	double xn, vn; //
	double Gerror; //глобальна€ погрешность
	double v2, v15; // v удвоенное и v+1/2
	double S, er; //  онтрольное слагаемое и оценка лин погрешности
	double h;
	int sub; 
	PPaint()
	{
		num = 0;
		sub = u = xn = vn = Gerror = v2 = v15 = S = er = 0;
		h = 0.1;
	}
};

struct PPaint1
{
	int num;
	double xn, v1, v2; //
	double v22, v21, v115, v215;
	double S, er;
	double h;
	int sub;
	PPaint1()
	{
		num = 0;
		sub = xn = v1 = v2 = v21 = v22 = v115 = v215 = S=er = 0;
		h = 0.1;
	}
};

inline double max(double x1, double x2)
{
	if (x1 > x2)
		return x1;
	return x2;
}

inline double FTEST(double x, double v)
{
	return v;
}

inline double FBASIC1(double x, double v)
{
	return (x/(1+x*x))*v*v+v-v*v*v*sin(10*x);
}

inline double FBASIC_2_1(double x, double v1, double v2)
{
	return v2;
}

inline double FBASIC_2_2(double x, double v1, double v2, double a,double b)
{
	return a*v2+b*sin(v1);
}

inline double RK4_1(double x, double v1, double v2, double h)
{
	double V; // Vn+1
	double k1, k2, k3, k4;

	k1 = FBASIC_2_1(x, v1, v2);
	k2 = FBASIC_2_1(x + (h / 2.0), v1 + (h / 2.0) * k1, v2 + (h / 2.0) * k1);
	k3 = FBASIC_2_1(x + (h / 2.0), v1 + (h / 2.0) * k2, v2 + (h / 2.0) * k2);
	k4 = FBASIC_2_1(x + h, v1 + h * k3, v2 + h * k3);

	V = v1 + (h / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

inline double RK4_2(double x, double v1, double v2, double h, double a, double b)
{
	double V; // Vn+1
	double k1, k2, k3, k4;

	k1 = FBASIC_2_2(x, v1, v2, a, b);
	k2 = FBASIC_2_2(x + (h / 2.0), v1 + (h / 2.0) * k1, v2 + (h / 2.0) * k1, a, b);
	k3 = FBASIC_2_2(x + (h / 2.0), v1 + (h / 2.0) * k2, v2 + (h / 2.0) * k2, a, b);
	k4 = FBASIC_2_2(x + h, v1 + h * k3, v2 + h * k3, a, b);

	V = v2 + (h / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}


inline double RK4_Test(double Xn, double Vn, double hn)
{
	double V; // Vn+1
	double k1, k2, k3, k4;

	k1 = FTEST(Xn, Vn);
	k2 = FTEST(Xn + (hn / 2.0), Vn + (hn / 2.0) * k1);
	k3 = FTEST(Xn + (hn / 2.0), Vn + (hn / 2.0) * k2);
	k4 = FTEST(Xn + hn, Vn + hn * k3);

	V = Vn + (hn / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

inline double RK4_BASIC1(double Xn, double Vn, double hn)
{
	double V; // Vn+1
	double k1, k2, k3, k4;

	k1 = FBASIC1(Xn, Vn);
	k2 = FBASIC1(Xn + (hn / 2.0), Vn + (hn / 2.0) * k1);
	k3 = FBASIC1(Xn + (hn / 2.0), Vn + (hn / 2.0) * k2);
	k4 = FBASIC1(Xn + hn, Vn + hn * k3);

	V = Vn + (hn / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

inline std::vector<PPaint> StartMethodTest(int n, PPaint p0,double control, double range, double xmax)
{
	std::vector<PPaint> points;
	p0.u = p0.vn;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double xtmp;
	PPaint p;
	double c = p0.vn/exp(p0.xn);
	while (i < n + 1)
	{
		if (points[i - 1].xn > xmax - range)
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		if (p.xn > xmax)
		{
			h = h / 2;
			continue;
		}
		p.vn = RK4_Test(points[i - 1].xn, points[i - 1].vn, h);
		xtmp = p.xn - h / 2;
		p.v15 = RK4_Test(points[i - 1].xn, points[i - 1].vn, h / 2.0);
		p.v2 = RK4_Test(xtmp, p.v15, h / 2.0);
		p.S = (p.vn - p.v2) / 15.0;
		if (abs(p.S) > control)
		{
			p.sub = -2;
			h = h / 2.0;
			continue;
		}
		if (abs(p.S) < control/ 32.0)
		{
			p.sub = 2;
			h = 2.0 * h;
			p.u = c*exp(p.xn);
			p.Gerror = p.u - p.vn;
			points.push_back(p);
			i++;
			continue;
		}
		p.u = c*exp(p.xn);
		p.Gerror = p.u - p.vn;
		points.push_back(p);
		i++;
	}
	return points;
}

inline std::vector<PPaint> Test(int n, PPaint p0, double control, double range, double xmax)
{
	std::vector<PPaint> points;
	p0.u = p0.vn;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	PPaint p;
	double c = p0.vn/exp(p0.xn);
	while (i < n + 1)
	{
		if (points[i - 1].xn > xmax - range)
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		if (p.xn > xmax)
		{
			h = h / 2;
			continue;
		}
		p.vn = RK4_Test(points[i - 1].xn, points[i - 1].vn, h);
		p.u = c*exp(p.xn);
		p.Gerror = p.u - p.vn;
		points.push_back(p);
		i++;
	}
	return points;
}

inline std::vector<PPaint> Basic(int n, PPaint p0, double control, double range, double xmax)
{
	std::vector<PPaint> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	PPaint p;
	while (i < n + 1)
	{
		if (points[i - 1].xn > xmax - range)
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		if (p.xn > xmax)
		{
			h = h / 2;
			continue;
		}
		p.vn = RK4_BASIC1(points[i - 1].xn, points[i - 1].vn, h);
		points.push_back(p);
		i++;
	}
	return points;
}

inline std::vector<PPaint> StartMethodBasic1(int n, PPaint p0, double control, double range, double xmax)
{
	std::vector<PPaint> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double xtmp;
	PPaint p;
	while (i < n + 1)
	{
		if (points[i - 1].xn > xmax - range)
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		if (p.xn > xmax)
		{
			h = h / 2;
			continue;
		}
		p.vn = RK4_BASIC1(points[i - 1].xn, points[i - 1].vn, h);
		xtmp = p.xn - h / 2;
		p.v15 = RK4_BASIC1(points[i - 1].xn, points[i - 1].vn, h / 2.0);
		p.v2 = RK4_BASIC1(xtmp, p.v15, h / 2.0);
		p.S = (p.vn - p.v2) / 15.0;
		if (abs(p.S) > control)
		{
			p.sub = -2;
			h = h / 2.0;
			continue;
		}
		if (abs(p.S) < control / 32.0)
		{
			p.sub = 2;
			h = 2.0 * h;
			points.push_back(p);
			i++;
			continue;
		}
		points.push_back(p);
		i++;
	}
	return points;
}

inline std::vector<PPaint1> StartMethodBasic2(int n, PPaint1 p0, double control, double range, double xmax,  double a, double b)
{
	std::vector<PPaint1> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double xtmp;
	PPaint1 p;
	while (i < n + 1)
	{
		if (points[i - 1].xn > xmax - range)
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		if (p.xn > xmax)
		{
			h = h / 2;
			continue;
		}
		p.v1 = RK4_1(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h);
		p.v2 = RK4_2(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h, a, b);
		xtmp = p.xn - h / 2.0;
		p.v115 = RK4_1(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h / 2.0);
		p.v215 = RK4_2(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h / 2.0, a, b);
		p.v21 = RK4_1(xtmp, p.v115, p.v215, h / 2.0);
		p.v22 = RK4_2(xtmp, p.v115, p.v215, h / 2.0, a, b);
		p.S = (max(abs(p.v21), abs(p.v22)) - max(abs(p.v1), abs(p.v2))) / 15.0;
		if (abs(p.S) > control)
		{
			p.sub = -2;
			h = h / 2.0;
			continue;
		}
		if (abs(p.S) < control / 32.0)
		{
			h = 2.0 * h;
			p.sub = 2;
			points.push_back(p);
			p.sub = 0;
			i++;
			continue;
		}
		points.push_back(p);
		p.sub = 0;
		i++;
	}
	return points;
}

inline std::vector<PPaint1> Basic2(int n, PPaint1 p0, double control, double range, double xmax, double a, double b)
{
	std::vector<PPaint1> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	PPaint1 p;
	while (i < n + 1)
	{
		if (points[i - 1].xn > xmax - range)
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		if (p.xn > xmax)
		{
			h = h / 2;
			continue;
		}
		p.v1 = RK4_1(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h);
		p.v2 = RK4_2(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h, a, b);
		p.S = (max(abs(p.v21), abs(p.v22)) - max(abs(p.v1), abs(p.v2))) / 15.0;
		points.push_back(p);
		i++;
	}
	return points;
}

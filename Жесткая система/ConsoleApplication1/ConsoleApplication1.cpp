
#include <iostream>
#include "metod.cpp"
#include <string>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{

	HWND hWnd = GetForegroundWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);
	setlocale(LC_ALL, "rus");
	const int w = 30;
	double maxv = 0;
	double xi = 0;
	bool flag = true;
	int f;
	cout << setprecision(10);
	cout.setf(ios::left);

	double h;
	int n;
	Point p0;
	vector<Point> points;
	while (flag)
	{
		cout << "Введите шаг: ";
		cin >> (h);
		cout << endl;
		cout << "Введите количество шагов: ";
		cin >> (n);
		cout << endl;

		p0.v1 = 7;
		p0.v2 = 13;
		p0.u1 = 7;
		p0.u2 = 13;
		p0.h = h;
		points = StartMethodBasic(n, p0);
		for (auto& i : points)
		{
			if (fabs(i.er) > maxv)
			{
				maxv = fabs(i.er);
				xi = i.xn;
			}
		}
		cout << std::setw(7) << "i" << std::setw(7) << "h" << std::setw(12) << "Xn" << std::setw(w) << "V1" << std::setw(w) << "V2"
			<< std::setw(w) << "U1" << std::setw(w) << "U2" << std::setw(w) << "Глоб погрешность" << std::setw(w) << "Погрешность 1 комп" << std::setw(w) << "Погрешность 2 комп" << endl;
		for (int i = 0; i < n + 1; i++)
		{
			cout << std::setw(7) << points[i].num << std::setw(7) << points[i].h << std::setw(12)
				<< points[i].xn << std::setw(w) << points[i].v1 << std::setw(w) << std::setw(w)
				<< points[i].v2 << std::setw(w) << points[i].u1 << std::setw(w) << points[i].u2 << std::setw(w)
				<< points[i].er << std::setw(w) << points[i].er1 << std::setw(w) << points[i].er2 << endl;
		}
		cout << endl << "Справка" << endl;
		cout << "Конечный x: " << points[points.size() - 1].xn << endl;
		cout << "Максимальная погрешность: " << maxv << " достигается при х: " << xi << endl;
		cout << "Для повторного вычисления введите 1, для выхода любую другую цифру"<< endl;
		cin.clear();
		cout << "Ваш выбор: ";
		cin >> f;
		if (f == 1)
			system("cls");
		else
			flag = false;
	}
}



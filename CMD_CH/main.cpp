#include "CH.h"
#include <string>
#include <iomanip>
#include "windows.h"

using namespace std;

int main() {
	HWND hWnd = GetForegroundWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);
	setlocale(LC_ALL, "rus");
	const int w = 18;
	cout << setprecision(10);
	cout.setf(ios::left);
	Point p;
	p.xn = 0;
	p.vn = 1;
	//p.h = 0.1;
	p.er = 0.0001;
	vector<Point> po;
	int n;
	int flag;
	while (true)
	{
		cout << "Выберите режим работы: 1-тестовый 2-основной" << endl;
		cout << "Ваш выбор: ";
		cin >> flag;
		if (flag != 1 && flag != 2)
		{
			cout << "Некоректный ввод!" << endl;
			system("pause");
			system("clear");
		}
		break;
	}
	cout << "Введите количество шагов: ";
	cin >> n;
	cout << endl<<"Введите Xo: ";
	cin >> p.xn;
	cout << endl << "Введите Vo: ";
	cin >> p.vn;
	cout << endl << "Введите шаг: ";
	cin >> p.h;
	cout << endl;
	if (flag == 1)
	{
		po = StartMethodTest(n, p);
		cout << std::setw(7) << "n" << std::setw(7) << "h" << std::setw(7) << "Xn" << std::setw(w) << "Vn" << std::setw(w) << "U" << std::setw(w) << "V h+1"
			<< std::setw(w) << "V2" << std::setw(w) << "S" << std::setw(10) << "ER" << std::setw(w) << "E" << endl;
		for (int i = 0; i < n + 1; i++)
		{
			cout << std::setw(7) << po[i].num << std::setw(7) << po[i].h << std::setw(7)
				<< po[i].xn << std::setw(w) << po[i].vn << std::setw(w) << po[i].u << std::setw(w)
				<< po[i].v15 << std::setw(w) << po[i].v2 << std::setw(w) << po[i].S << std::setw(10)
				<< po[i].er << std::setw(w) << po[i].Gerror << endl;
		}
	}
	else
	{
		double a, s;
		cout << "Введите s: "; 
		cin >> s;
		cout <<endl<< "Введите a: ";
		cin >> a;
		cout << endl;
		po = StartMethodBasic(n, p,a,s);
		cout << std::setw(7) << "n" << std::setw(7) << "h" << std::setw(7) << "Xn" << std::setw(w) << "Vn" << std::setw(w) << "V h+1"
			<< std::setw(w) << "V2" << std::setw(w) << "S" << std::setw(10) << "ER" << endl;
		for (int i = 0; i < n + 1; i++)
		{
			cout << std::setw(7) << po[i].num << std::setw(7) << po[i].h << std::setw(7)
				<< po[i].xn << std::setw(w) << po[i].vn << std::setw(w) <<  std::setw(w)
				<< po[i].v15 << std::setw(w) << po[i].v2 << std::setw(w) << po[i].S << std::setw(10)
				<< po[i].er << endl;
		}
	}

	system("pause");
}
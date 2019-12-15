#include <iostream>
#include <cmath>
#include <vector>
#include <functional>

inline double max(double x1, double x2)
{
	if (x1 > x2)
		return x1;
	return x2;
}

template<typename Function>
static inline double calc_a_value(double xi, Function k_function)
{
	double a_value = k_function(xi);
	return a_value;
}

template<typename Function>
static inline double calc_phi_value(double xi, Function f_function)
{
	double phi_value = f_function(xi);
	return return phi_value;
}

template<typename Function>
static inline double calc_d_value(double xi, Function q_function)
{
	double d_value = q_function(xi);
	return return d_value;
}



// testovay
inline std::vector<std::vector<double>> StartMethodTest(int n, double gap_point)
{
	auto k1 = [](double x_value) -> double
	{
		return 1;
	};
	auto k2 = [](double x_value) -> double
	{
		return 1;
	};
	auto f1 = [](double x_value) -> double
	{
		return x_value*x_value - 2;
	};
	auto f2 = [](double x_value) -> double
	{
		return x_value * x_value - 2;
	};
	auto q1 = [](double x_value) -> double
	{
		return 1;
	};
	auto q2 = [](double x_value) -> double
	{
		return 1;
	};
	const double function_coef = 1.f / n;
	int i = 1;
	std::vector<std::vector<double>> coefs(4);
	double step = 1.0 / n;
	double a = 0;
	double phi = 0;
	double d = 0;
	coefs[0].push_back(1.0);
	coefs[1].push_back(0.0);
	coefs[2].push_back(0.0);
	coefs[3].push_back(0.0);
	std::vector<double> setka;
	double j = step;
	while (j < 1)
	{
		setka.push_back(j);
		j = j + step;
	}
	{
		double x = setka.back();
		if (abs(x - 1) < 1e-9) setka.pop_back();
	}

	for (auto xi : setka) {
		if (xi + step < gap_point) {
			// k1
			phi = f1(xi);
			d = q1(xi);
		}
		else if (xi > gap_point) {
			// k2
			phi = f2(xi);
			d = q2(xi);
		}
		else {
			// k1, k2
			double x = gap_point;
			phi = (1.0 / step) * ((x - xi) * f1((x + xi) / 2.0) + (xi + step - x) * f2((xi + step + x) / 2.0));
			d = (1.0 / step) * ((x - xi) * q1((x + xi) / 2.0) + (xi + step - x) * q2((xi + step + x) / 2.0));
		}
		coefs[2].push_back(phi);
		coefs[1].push_back(d);
		coefs[3].push_back(xi);
	}

	std::vector<double> vspom_setka;
	//for (double i = step / 2.0; i < n - 1 + step / 2.0; i += step) vspom_setka.push_back(i);
	vspom_setka.push_back(step / 2);
	for (int i = 1; i < n; i++)
		vspom_setka.push_back(vspom_setka[i - 1] + step);
	{
		double x = vspom_setka.back();
		if (abs(x - 1) < 1e-9) vspom_setka.pop_back();
	}


	for (auto xi : vspom_setka) {
		if (xi + step < gap_point) {
			// k1
			a = k1(xi);
		}
		else if (xi > gap_point) {
			// k2
			a = k2(xi);
		}
		else {
			// k1, k2
			double x = gap_point;
			a = (1.0 / step) * ((x - xi) * k1((x + xi) / 2.0) + (xi + step - x) * k2((xi + step + x) / 2.0));
		}
		coefs[0].push_back(a);
	}
	coefs[0].push_back(1.0);
	coefs[1].push_back(0.0);
	coefs[2].push_back(1.0);
	coefs[3].push_back(1.0);
	return coefs;

}




inline std::vector<std::vector<double>> StartMethodBasic(int n, double gap_point)
{
	auto k1 = [](double x_value) -> double
	{
		return sqrt(x_value);
	};
	auto k2 = [](double x_value) -> double
	{
		return x_value + 1;
	};
	auto f1 = [](double x_value) -> double
	{
		return 1;
	};
	auto f2 = [](double x_value) -> double
	{
		return 2.f + sqrt(x_value);
	};
	auto q1 = [](double x_value) -> double
	{
		return 1;
	};
	auto q2 = [](double x_value) -> double
	{
		return x_value * x_value;
	};
	const double function_coef = 1.f / n;
	int i = 1;
	std::vector<std::vector<double>> coefs(4);
	double step = 1.0 / n;
	double a = 0;
	double phi = 0;
	double d = 0;
	coefs[0].push_back(1.0);
	coefs[1].push_back(0.0);
	coefs[2].push_back(0.0);
	coefs[3].push_back(0.0);
	std::vector<double> setka;
	double j = step;
	while (j < 1)
	{
		setka.push_back(j);
		j = j + step;
	}
	{
		double x = setka.back();
		if (abs(x - 1) < 1e-9) setka.pop_back();
	}

	for (auto xi : setka) {
		if (xi + step < gap_point) {
			// k1
			phi = f1(xi);
			d = q1(xi);
		}
		else if (xi > gap_point) {
			// k2
			phi = f2(xi);
			d = q2(xi);
		}
		else {
			// k1, k2
			double x = gap_point;
			phi = (1.0 / step) * ((x - xi) * f1((x + xi) / 2.0) + (xi + step - x) * f2((xi + step + x) / 2.0));
			d = (1.0 / step) * ((x - xi) * q1((x + xi) / 2.0) + (xi + step - x) * q2((xi + step + x) / 2.0));
		}
		coefs[2].push_back(phi);
		coefs[1].push_back(d);
		coefs[3].push_back(xi);
	}

	std::vector<double> vspom_setka;
	//for (double i = step / 2.0; i < n - 1 + step / 2.0; i += step) vspom_setka.push_back(i);
	vspom_setka.push_back(step / 2);
	for (int i = 1; i < n; i++)
		vspom_setka.push_back(vspom_setka[i - 1] + step);
	{
		double x = vspom_setka.back();
		if (abs(x - 1) < 1e-9) vspom_setka.pop_back();
	}


	for (auto xi : vspom_setka) {
		if (xi + step < gap_point) {
			// k1
			a = k1(xi);
		}
		else if (xi > gap_point) {
			// k2
			a = k2(xi);
		}
		else {
			// k1, k2
			double x = gap_point;
			a = (1.0 / step) * ((x - xi) * k1((x + xi) / 2.0) + (xi + step - x) * k2((xi + step + x) / 2.0));
		}
		coefs[0].push_back(a);
	}
	coefs[0].push_back(1.0);
	coefs[1].push_back(0.0);
	coefs[2].push_back(1.0);
	coefs[3].push_back(1.0);
	return coefs;

}







// <------------------------------------


inline std::vector<double> progonka(std::vector<std::vector<double>>& coef)
{
	double h = coef[3][1] - coef[3][0];
	std::vector<double> V;
	std::vector<double> V1;
	std::vector<double> alpha;
	std::vector<double> beta;
	double A, C, B;
	alpha.push_back(0.0);
	alpha.push_back(0.0);
	beta.push_back(0.0);
	beta.push_back(coef[2][0]);
	for (int i = 1; i < coef[1].size() - 1; i++)
	{
		A = coef[0][i] / (h * h);
		C = (coef[0][i] + coef[0][i + 1]) / (h * h) + coef[1][i];
		B = coef[0][i + 1] / (h * h);
		alpha.push_back(B / (C - alpha[i] * A));
		beta.push_back((coef[2][i] + A * beta[i]) / (C - alpha[i] * A));
	}
	V.push_back(1.0);
	for (int i = coef[1].size() - 2; i > 0; i--)
	{
		V.push_back(alpha[i + 1] * V[V.size()-1] + beta[i + 1]);
	}
	V.push_back(0);
	for (int i = V.size() - 1; i > -1; i--)
		V1.push_back(V[i]);
	return V1;
}

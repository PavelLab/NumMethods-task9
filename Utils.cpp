#include "Utils.h"

//
// User defined functions
//

//истинное решение
double utils::function_1(double x, parameter a/* =0 */)
{
	return sqrt(a.a1/(a.c*exp(2*a.a1*x/a.m)-a.a3));
}

//численное решение
double utils::function_1_derivative(double x, double y, parameter a /* =0 */)
{
	return (-a.a1*y-a.a3*pow(y,3))/a.m;
}

//
// Numerical methods
//

double utils::runge_kutta_4(std::function<double(double, parameter)> func,
	std::function<double(double, double, parameter)> func_der,
	double step, double x, double y, parameter a)
{
	double k1 = func_der(x, y, a);
	double k2 = func_der(x + step / 2.0, y + 0.5 * step * k1, a);
	double k3 = func_der(x + step / 2.0, y + 0.5 * step * k2, a);
	double k4 = func_der(x + step, y + step * k3, a);

	return y + (step / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
}

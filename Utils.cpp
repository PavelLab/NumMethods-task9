#include "Utils.h"

//
// User defined functions
//
double utils::max_error(double max_error, double error) {
	if (abs(error) > max_error)
		return abs(error);
	return max_error;
};


double utils::error_estimate(double half_step, double v_next, double p) {
	return ((half_step - v_next) / (pow(2, p) - 1)) * pow(2, p);
};

//истинное решение
double utils::function_1(double x, double y, parameter a/* =0 */)
{
	return sqrt(a.a1/(a.c*exp(2*a.a1*x/a.m)-a.a3));
}

//численное решение
double utils::function_1_derivative(double x, double y, parameter param /* =0 */)
{
	return (-param.a1 * y - param.a3 * pow(y, 3)) / param.m;
}

//
// Numerical methods
//

double utils::runge_kutta_4(std::function<double(double, double, parameter)> func_der,
	double step, double x, double y, parameter param)
{
	double k1 = func_der(x, y, param);
	double k2 = func_der(x + step / 2.0, y + 0.5 * step * k1, param);
	double k3 = func_der(x + step / 2.0, y + 0.5 * step * k2, param);
	double k4 = func_der(x + step, y + step * k3, param);

	return y + (step / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
}


std::vector<double> utils::next_point(num_method method, num_function func, double x, double v, double step, parameter param)
{
	double half_step_1;
	double half_step_2;
	double v_next = method(func, step, x, v, param);
	double x_next = x + step;
	double current_step = step;
	half_step_1 = method(func, step / 2., x, v, param); // получаем v_{n+1/2} из точки (x_{n}, v_{n}) с шагом h/2
	half_step_2 = method(func, step / 2., x + step / 2., half_step_1, param);
	std::vector<double> point = { x_next, v_next, step, current_step, half_step_2 };

	return point;
}

std::vector<double> utils::next_point_with_step_conrol(num_method method, num_function func,
	double x, double v, double step, double eps, parameter param)
{
	double whole_step;
	double half_step_1;
	double half_step_2;
	double error;
	double x_next;
	double v_next = 0;
	double current_step;


	while (true)
	{
		whole_step = method(func, step, x, v, param); // получаем v_{n+1} из точки (x_{n}, v_{n}) с шагом h
		half_step_1 = method(func, step / 2., x, v, param); // получаем v_{n+1/2} из точки (x_{n}, v_{n}) с шагом h/2
		half_step_2 = method(func, step / 2., x + step / 2., half_step_1, param); // получаем v_{n+1} с двумя крышками из точки (x_{n+1/2}, v_{n+1/2}) с шагом h/2

		error = abs((half_step_2 - whole_step) / (pow(2, 4) - 1)); // 4 because we use 4th order method

		if (error > eps)
			step /= 2.;
		else if (error < eps / pow(2, 4 + 1))
		{
			x_next = x + step;
			v_next = whole_step;
			current_step = step;
			step *= 2.;
			break;
		}
		else
		{
			x_next = x + step;
			v_next = whole_step;
			current_step = step;
			break;
		}
	}
	//current_step - шаг для вычисления текущей точки {x_next, v_next}

	std::vector<double> point = { x_next, v_next, step, current_step, half_step_2 };

	return point;

}
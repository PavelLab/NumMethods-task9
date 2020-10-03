#pragma once

#include <functional>
#include <cmath>
#include "Param.h"

namespace utils
{
	//
	// User defined functions
	//

	double function_1(double x, parameter a);
	double function_1_derivative(double x, double y, parameter a);

	//
	// Numerical methods
	//

	double runge_kutta_4(std::function<double(double,parameter)> func,
		std::function<double(double, double, parameter)> func_der,
		double step, double x, double y, parameter a);
}

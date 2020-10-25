#pragma once

#include <functional>
#include <cmath>
#include <vector>
#include "Param.h"

namespace utils
{
	//
	// Type aliases
	//

	typedef std::function<double(double, double, parameter)> num_function;
	typedef std::function<double(num_function, double, double, double, parameter)> num_method;
	
	
	//
	// User defined functions
	//
	double max_error(double max_error, double error);
	double error_estimate(double half_step, double v_next, double p);
	
	double function_1(double x, double y, parameter a);
	double function_1_derivative(double x, double y, parameter a);

	//
	// Numerical methods
	//

	double runge_kutta_4(std::function<double(double, double, parameter)> func_der,
		double step, double x, double y, parameter a);




	std::vector<double> next_point(num_method method, num_function func,
		double x, double y, double step, parameter a);
	std::vector<double> next_point_with_step_conrol(num_method method, num_function func,
		double x, double y, double step, double eps, parameter a);
}

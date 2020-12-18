#pragma once
//структура для параметров и константы с
struct parameter {
	double a1, a3, m, c;

	parameter(double _a1, double _a3, double _m) {
		a1 = _a1;
		a3 = _a3;
		m = _m;
	}
	void calculate_const(double y0) {
		if (y0 != 0)c = a1 / pow(y0, 2) + a3;
	}

};
#pragma once
class Drob {
public:
	double num1, num2;

	double add(double num1, double num2) {
		return num1 += num2;
	}

	double min(double num1, double num2) {
		return num1 -= num2;
	}

	double umn(double num1, double num2) {
		return num1 * num2;
	}

	double del(double num1, double num2) {
		return num1 / num2;
	}

};
// author : ¿Ã≈¬¿±

# include <iostream>
# include "Calculator.h"

using namespace std;

double Calculator::add(double num1, double num2){
	double result = num1 + num2;
	return result;
}

double Calculator::sub(double num1, double num2){
	double result = num1 - num2;
	return result;
}

double Calculator::mul(double num1, double num2)
{
	double result = num1 * num2;
	return result;
}

double Calculator::div(double num1, double num2){
	double result = num1 / num2;
	return result;
}

double Calculator::Calculate(double x, char cper, double y){
	if (cper == '+') {
		return add(x, y);
	}

	else if (cper == '-') {
		return sub(x, y);
	}

	else if (cper == '*') {
		return mul(x, y);
	}

	else if (cper == '/') {
		return x/y;
	}
}


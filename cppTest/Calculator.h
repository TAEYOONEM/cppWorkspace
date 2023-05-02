// author : ¿Ã≈¬¿±

#pragma once
#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_

class Calculator {
private:

public:
	double add(double num1, double num2); 
	double sub(double num1, double num2);
	double mul(double num1, double num2);
	double div(double num1, double num2);
	double Calculate(double x, char cper, double y);
};

#endif 
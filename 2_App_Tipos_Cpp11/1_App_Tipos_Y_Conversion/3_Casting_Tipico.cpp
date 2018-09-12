
#include "stdafx.h"
#include <iostream>

void ej_cast_perdida()
{
	double x = 3.6;
	int z = x;
	std::cout << z << std::endl;
}
void ej_cast_division()
{
	int dividendo = 5;
	int divisor = 2;
	double resultado = dividendo / divisor;
	std::cout << resultado << std::endl;
}
void ej_cast_division_ok()
{
	int dividendo = 5;
	int divisor = 2;
	double resultado = (double)dividendo / (double)divisor;
	std::cout << resultado << std::endl;
}
void ej_cast_division_ok_parentesis()
{
	int dividendo = 5;
	int divisor = 2;
	double resultado = double(dividendo) / double(divisor);
	std::cout << resultado << std::endl;
}
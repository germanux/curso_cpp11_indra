
#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

void ejemplo_rand()
{
	srand(static_cast<unsigned int>(time(0)));

	for (int i = 0; i < 10; ++i)
	{
		std::cout << rand() << "\t";
	}
}
void ejemplo_mersenne()
{
	std::random_device rd;
	std::mt19937 fun_mersenne(rd());
	for (int count = 0; count < 12; ++count)
	{
		std::cout << fun_mersenne() << "\t";
	}
}
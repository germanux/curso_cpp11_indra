#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ej_lambda_simple() {
	int n1 = 0;
	n1 = []() -> int { return 42 * 2; } ();
	cout << n1 << endl;

	int n2 = [](int x) -> int {
		return x * 2; } (42);
		cout << n2 << endl;

		int n3 = [](int x, int y) -> int {
			return x * y; } (42, 2);
			cout << n3 << endl;
}
void ej_lambdas_anidadas() {
	int n = [](int x, int y) -> int {
		return [](int p) -> int {
			return p * p;
		} (x)*y;
	} (8, 4);
	int local = 5; 

	int m = [](int x, int y) -> int {
		return x * y /*  + local */;
	} ([](int x) -> int {
		return x * x;
	}(8), 4);

	std::cout << n << ", " << m << endl;
}
int(*global_factorial_recursivo)(int x) = [](int x) -> int { 
	if (x > 0)
		return x * global_factorial_recursivo(x - 1);
	else
		return 1;
};
void ej_lambdas_punteros() {

	int(*fun_punt)(int x) = [](int x) -> int { return x * x;};

	auto fun_lambda = [](int x) -> int { return x * x;};

	std::cout << fun_lambda(3) << endl;
	std::cout << fun_punt(3) << endl;
	std::cout << global_factorial_recursivo(8) << endl;
}
void ej_lambdas_genericas_cpp14() {
	auto f = [](auto x) -> auto {return x + x;};
	std::cout << f(3) << endl;
	std::cout << f(3.1) << endl;
	std::cout << f(string("XAAB")).c_str() << endl;
}
void ej_lambdas_como_param() {
	auto f = [](auto x) -> auto {return x + x;};
	auto f2 = [](auto x, auto y) -> int {
		return x(y) * 2;
	};
	std::cout << f2(f, 2) << endl;
}
void practica_sort_lamba() {
	int n = 10;
	vector<int> v(n);
	for (int i = n - 1, j = 0; i >= 0; i--, j++) {
		v[j] = i + 1;
	}
	v[5] = 25;
	v.insert(v.end(), 1);
	v.insert(v.end(), 3);
	v.insert(v.begin(), 50);
	for (int i = 0; i < v.size(); i++) cout << v[i] << ", ";
	cout << endl;
	auto f1 = [](int i, int j) -> bool { return i < j; };
	auto f2 = [](int i, int j) -> bool { 

		if ((i + j) % 2 == 0)  return i < j;
		if (i % 2 == 1)  return true;
		return false;
	};
	sort(v.begin(), v.end(), f2);

	for (int i = 0; i <  v.size(); i++) cout << v[i] << ", ";
}
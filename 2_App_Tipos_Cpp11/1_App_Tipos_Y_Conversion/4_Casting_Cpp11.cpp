
#include "stdafx.h"
#include <iostream>

using namespace std;

void ej_static_cast_division()
{
	int dividendo = 5;
	int divisor = 2;
	double resultado = static_cast<double>(dividendo) / static_cast<double>(divisor);
	cout << resultado << std::endl;
}
void f(char * str) {
	cout << str << '\n';
}
class A {};
class B :public A {};

void ej_otros_cast() {
	const char * c = "algo";
	B* b = new B();
	//la función recibe un no const
	f(const_cast<char *> (c));
	//interpreto la dirección como un numero (tipos distintos)
	cout << reinterpret_cast<int>(c) << endl;
	//el elemento apuntado puede ser convertido a entero, es compatible
	cout << static_cast<int>(*c) << endl;
	//sólo se puede usar con clases polimórficas, con un A* a no funcionaría
	cout << dynamic_cast<A*>(b) << endl;
}
void ej_typeid() {
	int a(5);
	int* ptr_a = &a;
	float b(1.4);
	std::cout << "ptr_a es: " << typeid(ptr_a).name() << std::endl;
	std::cout << "b es: " << typeid(b).name() << std::endl;
}

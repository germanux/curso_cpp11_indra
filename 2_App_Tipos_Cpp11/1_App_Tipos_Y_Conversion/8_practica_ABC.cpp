
#include "stdafx.h"
#include <iostream>

using namespace std;

class A {
public:
	void muestra() { cout << "Soy A" << endl; }
};
class B : public A {
public:
	void muestra() { cout << "Soy B" << endl; }
};
class C {
public:
	void muestra() { cout << "Soy C" << endl; }
};
void foo(char * x) { cout << x << endl; }

void practica_clases() {
	A* a = new B();
	a->muestra();
	(static_cast<B*>(a))->muestra();
	/**/
	C* c = new C();
	(reinterpret_cast<B*>(c))->muestra();
	/**/
	const char * x = "algo";
	foo(const_cast<char*>(x));
}
#include "stdafx.h"
#include <iostream>
#include <string>
#include <regex>

using namespace std;

void ej_raw_string() {
	string normal = "Hola\nAdios";
	string raw = R"(Hola\nAdios)";
	cout << normal << endl;
	cout << raw << endl;

	// regex integer("(\\+|-)?[[:digit:]]+");
//	regex integer(R"((\+|-)?[[:digit:]]+)");
}
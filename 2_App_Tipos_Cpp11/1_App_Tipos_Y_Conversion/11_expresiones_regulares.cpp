#include "stdafx.h"
#include <iostream>
#include <string>
#include <regex>

using namespace std;

void ej_regex() {
	string entrada;
	regex patron(R"(^(.)(.)(.)\3\2\1$)");
	cout << "Introduzca una cadena: " << endl;
	cin >> entrada;
	if (regex_match(entrada, patron)) {
		cout << "OK" << endl;
	}
	else
	{
		cout << "KO" << endl;
	}
}

void ej_regex_smatch() {

	string texto("escribe a nombre@cle.es, profesor@pronoide.es o bien a contacto@indra.com con tus sugerencias ");
	smatch sm;
	//    ([[:alnum:]]+)  @  ( [[:alnum:]]+  \.  [[:alnum:]]+ )
	regex expr_reg(R"(([[:alnum:]]+)@([[:alnum:]]+\.[[:alnum:]]+))");
	cout << "Texto: " << texto << endl;
	cout << "Patron:   <([[:alnum:]]+)  @  ( [[:alnum:]]+  \.  [[:alnum:]]+ )>";
	cout << "Resultado: " << endl;

	int vuelta = 0;
	while (regex_search(texto, sm, expr_reg)) {

		smatch::iterator iteraMatch;
		iteraMatch = sm.begin();
		while (iteraMatch != sm.end()) {
			cout << *iteraMatch << "  " << endl;
			iteraMatch++;
		}/*
		int subgrupo = 0;
		cout << "Match num: " << vuelta << endl;
		for (auto x : sm) {
			cout << "Subgrupo " << subgrupo << " \"" << x << "\" ";
			subgrupo++;
		}
		cout << endl; */
		texto = sm.suffix().str();
		vuelta++;
	}
}

#include "stdafx.h"
#include <iostream>

enum estado {
	SOLTERO = 0,
	CASADO = 1,
	VIUDO = 2,
	DIVORCIADO = 3
};
/*enum estado{
	SOLTERO=-3,
	CASADO=-4,
	VIUDO,// "-3", el compilador asigna el valor anterior, CASADO, + 1
	DIVORCIADO=3
};*/
estado dameEstado()
{
	return CASADO;
}

enum sexo {
	HOMBRE,
	MUJER
};

void ej_enum_valores()
{
	estado e = CASADO;
	sexo s = MUJER;
	if (s == e) { std::cout << "son iguales" << std::endl; }
}
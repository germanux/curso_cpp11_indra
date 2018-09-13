
#include "stdafx.h"
#include <iostream>

enum class Estado {
	SOLTERO,
	CASADO,
	VIUDO,
	DIVORCIADO
};

enum class Sexo {
	HOMBRE,
	MUJER
};

void ej_enum_class()
{
	Estado e = Estado::CASADO;
	Sexo s = Sexo::MUJER;
	// No compila:
	// if (s == e) { std::cout << "son iguales" << std::endl; }
}
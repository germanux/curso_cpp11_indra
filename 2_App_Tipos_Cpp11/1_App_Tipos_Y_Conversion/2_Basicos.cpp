
#include "stdafx.h"
#include <iostream>

void ej_tipos_basicos() {
	/*Ejemplos de declaración de variables*/
	int x = 0;//se declara una variable de tipo int, de nombre x
	int y(5);//se declara la variable y con valor 5, de tipo int
	char c ( 'c');//se declara una variable de tipo char de nombre c
}

void ej_sizeof() {
	int x = 0;//se declara una variable de tipo int, de nombre x
	std::cout << "El tamaño de X es " << sizeof(x) << " Bytes" << std::endl;
}
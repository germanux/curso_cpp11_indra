
#include "stdafx.h"
#include "Persona.h"
#include <iostream>
#include <set>

using namespace std;

void ej_for_each()
{
	int array[] = { 3,7,2,4,9,4,12 };
	for (int i : array)
	{
		cout << i << endl;
	}
}
void ej_for_each_persona()
{
	std::string nombre = "Nombre";
	std::string apellidos = "Apellidos";
	int edad;
	set<Persona> listaPersonas;
	for (int i = 0; i < 3; i++) {
		cout << "Edad" << endl;
		cin >> edad;
		Persona p(nombre, apellidos, edad);
		listaPersonas.insert(p);
	}

	for (auto i : listaPersonas) {
		std::cout << i.muestra() << std::endl;
	}
}
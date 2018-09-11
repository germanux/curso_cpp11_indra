
#include "stdafx.h"
#include "Persona.h"
#include <iostream>
#include <set>
using namespace std;

void practica_persona()
{
	std::string nombre;
	std::string apellidos;
	int edad;
	set<Persona> listaPersonas;
	for (int i = 0; i < 3; i++) {
		cout << "Nombre" << endl;
		cin >> nombre;
		cout << "Apellidos" << endl;
		cin >> apellidos;
		cout << "Edad" << endl;
		cin >> edad;
		Persona p(nombre, apellidos, edad);
		listaPersonas.insert(p);
	}
	set<Persona>::iterator it = listaPersonas.begin();
	while (it != listaPersonas.end())
	{
		Persona x = *it;
		cout << x.muestra() << endl;
		it++;
	}
}
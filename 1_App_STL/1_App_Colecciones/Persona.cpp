#include "stdafx.h"
#include "Persona.h"

Persona::Persona(std::string n, std::string a, int edad) {
	nombre = n;
	apellidos = a;
	this->edad = edad;
};
bool operator<(const Persona& p1, const Persona& p2) {
	if (p1.edad < p2.edad) {
		return true;
	}
	return false;
};
std::string Persona::muestra() {
	std::string result = std::string(this->nombre) +
		std::string(" ") + std::string(this->apellidos) +
		std::string(" ") + std::to_string(this->edad);
	return result;
};
Persona::~Persona()
{
}

#pragma once
#include <iostream>
#include <string>
class Persona
{
private:
	int edad;
	std::string nombre;
	std::string apellidos;
public:
	Persona(std::string n, std::string a, int edad);
	friend bool operator<(const Persona& p1, const Persona& p2);
	std::string muestra();
	~Persona();
};


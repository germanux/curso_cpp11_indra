#include "../include/Persona.h"

using namespace std;

Persona::Persona(int edad, string n, string a)
{
    nombre = a;
    apellidos = n;
    this->edad = edad;
}
bool operator<(const Persona& p1, const Persona& p2) {
    return p1.edad < p2.edad;
}
std::string Persona::muestra() {
    std::string resultado = this->nombre +
            string(" ") + this->apellidos +
            string(" - ") + std::to_string(this->edad);
    return resultado;
}
Persona::~Persona()
{
    //dtor
}

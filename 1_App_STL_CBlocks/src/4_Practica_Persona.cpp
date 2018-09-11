#include "../include/Persona.h"
#include <set>

using namespace std;

void practica_persona() {
    int edad;
    string nombre;
    string apellidos;
    set<Persona> setPersonas;
    for (int i = 0; i < 3; i++) {
        cout << "Introduzca edad: " << endl;
        cin >> edad;
        cout << "Introduzca nombre: " << endl;
        cin >> nombre;
        cout << "Introduzca apellidos: " << endl;
        cin >> apellidos;
        Persona p(edad, nombre, apellidos);
        setPersonas.insert(p);
    }
    set<Persona>::iterator it = setPersonas.begin();
    while (it != setPersonas.end())  {
        Persona px = *it;
        cout << px.muestra() << endl;
        it++;
    }
}

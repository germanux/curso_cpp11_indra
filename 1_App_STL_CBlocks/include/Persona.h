#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
#include <string>

class Persona
{
    private:
        int edad;
        std::string nombre;
        std::string apellidos;

    public:
        Persona(int edad, std::string nombre, std::string apellidos);
        friend bool operator<(const Persona& p1,
                              const Persona& p2);
        std::string muestra();
        virtual ~Persona();

};

#endif // PERSONA_H

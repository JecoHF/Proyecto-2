#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

class Estudiante
{
    public:
        Estudiante();

        // M�todos set:
        void setIdEst(string *IdEst);
        void setEdad(string *edad);
        void setNombre(string *nombre);
        void setDireccion(string *direccion);
        void setEmail(string *email);
        void setCarrera(string *carrera);
        void setPromedio(string *promedio);

        //M�todos get:

        string getIdEst();
        string getEdad();
        string getNombre();
        string getDireccion();
        string getEmail();
        string getCarrera();
        string getPromedio();

        //M�todos adicionales:
        string toStringEst();

        virtual ~Estudiante();

    protected:

    private:
        string *IdEst;
        string *edad;
        string *nombre;
        string *direccion;
        string *email;
        string *carrera;
        string *promedio;
};

#endif // ESTUDIANTE_H

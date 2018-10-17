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

        // Métodos set:
        void setIdEst(string *IdEst);
        void setEdad(int *edad);
        void setNombre(string *nombre);
        void setDireccion(string *direccion);
        void setEmail(string *email);
        void setCarrera(string *carrera);
        void setPromedio(float *promedio);

        //Métodos get:

        string getIdEst();
        int getEdad();
        string getNombre();
        string getDireccion();
        string getEmail();
        string getCarrera();
        float getPromedio();

        //Métodos adicionales:
        string toStringEst();

        virtual ~Estudiante();

    protected:

    private:
        string *IdEst;
        int *edad;
        string *nombre;
        string *direccion;
        string *email;
        string *carrera;
        float *promedio;
};

#endif // ESTUDIANTE_H

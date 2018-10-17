#ifndef AUTOR_H
#define AUTOR_H
#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

class Autor
{
    public:
        Autor();

        //M�todos set:

        void setIdAutor(string *IdAutor);
        void setNombreA(string *NombreA);
        void setEspecialidad(string *Especialidad);
        void setCantPub(string *CantPub);

        //M�todos get:

        string getIdAutor();
        string getNombreA();
        string getEspecialidad();
        string getCantPub();

        //M�todos adicionales:

        string toStringAutor();

        virtual ~Autor();

    protected:

    private:
        string *IdAutor;
        string *NombreA;
        string *Especialidad;
        string *CantPub;
};

#endif // AUTOR_H

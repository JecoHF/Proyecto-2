#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include <sstream>
#include <windows.h>

using namespace std;

class Libro
{
    public:
        Libro();

        //Métodos set:

        void setIdLib(string *IdLib);
        void setDescripcion(string *Descripcion);
        void setISBN(string *ISBN);
        void setCantE(string *CantE);

        //Métodos get:

        string getIdLib();
        string getDescripcion();
        string getISBN();
        string getCantE();

        //Métodos adicionales:

        string toStringLibro();

        virtual ~Libro();

    protected:

    private:
        string *IdLib;
        string *Descripcion;
        string *ISBN;
        string *CantE;
};

#endif // LIBRO_H

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
        Autor(string *, string *, string *, string *);

        //Metodos set:

        void setIdAutor(string *IdAutor);
        void setNombreAutor(string *NombreAutor);
        void setAreaEsp(string *AreaEsp);
        void setCantPub(string *CantPub);

        //Metodos get:

        string getIdAutor();
        string getNombreAutor();
        string getAreaEsp();
        string getCantPub();

        //Metodos Adicionales:

        string toStringAutor();

        virtual ~Autor();

    protected:

    private:
        string *IdAutor;
        string *NombreAutor;
        string *AreaEsp;
        string *CantPub;
};

#endif // AUTOR_H

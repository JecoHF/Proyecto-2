#ifndef NODOAUTOR_H
#define NODOAUTOR_H
#include "Autor.h"

class NodoAutor
{
    public:
        NodoAutor();

        //Metodos set:

        void setAuto(Autor *Auto);
        void setSigA(NodoAutor *SigA);

        //Metodos get:

        Autor *getAuto();
        NodoAutor *getSigA();

        virtual ~NodoAutor();

    protected:

    private:
        Autor *Auto;
        NodoAutor *SigA;
};

#endif // NODOAUTOR_H

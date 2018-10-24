#ifndef NODOLIBRO_H
#define NODOLIBRO_H
#include "Libro.h"

class NodoLibro
{
    public:
        NodoLibro();

        //Metodos set:

        void setLib(Libro *lib);
        void setSigLi(NodoLibro *SigLi);

        //Metodos get:

        Libro *getLib();
        NodoLibro *getSigLi();

        virtual ~NodoLibro();

    protected:

    private:
        Libro *lib;
        NodoLibro *SigLi;
};

#endif // NODOLIBRO_H

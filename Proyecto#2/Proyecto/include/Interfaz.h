#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "ListaEstudiante.h"
#include "ListaAutor.h"
#include "ListaLibro.h"


class Interfaz
{
    public:
        Interfaz();
        void MenuPrincipal();
        void MenuEstudiante();
        void MenuAutor();
        void MenuLibro();
        virtual ~Interfaz();

    protected:

    private:
        ListaEstudiante *ListEst;
        ListaAutor *ListA;
        ListaLibro *ListLi;
};

#endif // INTERFAZ_H

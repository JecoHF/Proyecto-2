#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "ListaEstudiante.h"


class Interfaz
{
    public:
        Interfaz();
        void MenuEstudiante();
        virtual ~Interfaz();

    protected:

    private:
        ListaEstudiante *ListEst;
};

#endif // INTERFAZ_H

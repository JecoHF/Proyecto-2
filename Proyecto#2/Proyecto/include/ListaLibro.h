#ifndef LISTALIBRO_H
#define LISTALIBRO_H
#include "NodoLibro.h"

class ListaLibro
{
    public:
        ListaLibro();
        void AgregarLibro(Libro *lib);
        void ModificarLibro();
        void EliminarLibro();
        void VerLibro();
        void VerTodosLibros();
        virtual ~ListaLibro();

    protected:

    private:
        NodoLibro *raizLi;
};

#endif // LISTALIBRO_H

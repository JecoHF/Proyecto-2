#ifndef LISTAAUTOR_H
#define LISTAAUTOR_H
#include "NodoAutor.h"

class ListaAutor
{
    public:
        ListaAutor();
        void AgregarAutor(Autor *Auto);
        void ModificarAutor();
        void EliminarAutor();
        void VerAutor();
        void VerTodosAutores();
        virtual ~ListaAutor();

    protected:

    private:
        NodoAutor *raizA;
};

#endif // LISTAAUTOR_H

#ifndef LISTAESTUDIANTE_H
#define LISTAESTUDIANTE_H
#include "NodoEstudiante.h"

class ListaEstudiante
{
    public:
        ListaEstudiante();
        void AgregarEstudiante(Estudiante *Est);
        void ModificarEstudiante();
        void EliminarEstudiante();
        void VerEstudiante();
        void VerTodosEstudiantes();
        virtual ~ListaEstudiante();

    protected:

    private:
        NodoEstudiante *RaizE;
};

#endif // LISTAESTUDIANTE_H

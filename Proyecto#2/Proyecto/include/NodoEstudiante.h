#ifndef NODOESTUDIANTE_H
#define NODOESTUDIANTE_H
#include "Estudiante.h"

class NodoEstudiante
{
    public:
        NodoEstudiante();

        //Métodos set:

        void setEst(Estudiante *Est);
        void setSigE(NodoEstudiante *SigE);

        //Métodos get:

        Estudiante *getEst();
        NodoEstudiante *getSigE();

        virtual ~NodoEstudiante();

    protected:

    private:
        Estudiante *Est;
        NodoEstudiante *SigE;
};

#endif // NODOESTUDIANTE_H

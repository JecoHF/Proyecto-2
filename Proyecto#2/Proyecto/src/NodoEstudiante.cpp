#include "NodoEstudiante.h"

NodoEstudiante::NodoEstudiante()
{

}

//M�todos set:

void NodoEstudiante::setEst(Estudiante *Est){
    this->Est=Est;
}

void NodoEstudiante::setSigE(NodoEstudiante *SigE){
    this->SigE=SigE;
}

//M�todos get:

Estudiante *NodoEstudiante::getEst(){
    return Est;
}
NodoEstudiante *NodoEstudiante::getSigE(){
    return SigE;
}

NodoEstudiante::~NodoEstudiante()
{
    //dtor
}

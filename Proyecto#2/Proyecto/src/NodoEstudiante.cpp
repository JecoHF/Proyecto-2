#include "NodoEstudiante.h"

NodoEstudiante::NodoEstudiante()
{

}

//Métodos set:

void NodoEstudiante::setEst(Estudiante *Est){
    this->Est=Est;
}

void NodoEstudiante::setSigE(NodoEstudiante *SigE){
    this->SigE=SigE;
}

//Métodos get:

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

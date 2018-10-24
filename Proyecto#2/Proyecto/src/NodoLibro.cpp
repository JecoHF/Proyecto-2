#include "NodoLibro.h"

NodoLibro::NodoLibro()
{
    //ctor
}

//Metodos set:

void NodoLibro::setLib(Libro *lib){
    this->lib=lib;
}
void NodoLibro::setSigLi(NodoLibro *SigLi){
    this->SigLi=SigLi;
}

//Metodos get:

Libro *NodoLibro::getLib(){
    return lib;
}
NodoLibro *NodoLibro::getSigLi(){
    return SigLi;
}

NodoLibro::~NodoLibro()
{
    //dtor
}

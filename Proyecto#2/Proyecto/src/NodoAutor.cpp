#include "NodoAutor.h"

NodoAutor::NodoAutor()
{

}

//Metodos set:

void NodoAutor::setAuto(Autor *Auto){
    this->Auto=Auto;
}
void NodoAutor::setSigA(NodoAutor *SigA){
    this->SigA=SigA;
}

//Metodos get:

Autor *NodoAutor::getAuto(){
    return Auto;
}
NodoAutor *NodoAutor::getSigA(){
    return SigA;
}

NodoAutor::~NodoAutor()
{
    //dtor
}

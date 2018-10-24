#include "Libro.h"

Libro::Libro()
{
    IdLib=new string();
    Descripcion=new string();
    ISBN=new string();
    CantE=new string();
}

//Métodos set:

void Libro::setIdLib(string *IdLib){
    this->IdLib=IdLib;
}
void Libro::setDescripcion(string *Descripcion){
    this->Descripcion=Descripcion;
}
void Libro::setISBN(string *ISBN){
    this->ISBN=ISBN;
}
void Libro::setCantE(string *CantE){
    this->CantE=CantE;
}

//Métodos get:

string Libro::getIdLib(){
    return *IdLib;
}
string Libro::getDescripcion(){
    return *Descripcion;
}
string Libro::getISBN(){
    return *ISBN;
}
string Libro::getCantE(){
    return *CantE;
}

//Métodos adicionales:

string Libro::toStringLibro(){

    stringstream k;
    k<<endl;
    k<<"------------------"<<endl;
    k<<"Datos del Libro: "<<endl;
    k<<"Id: "<<*IdLib<<endl;
    k<<"Descripcion: "<<*Descripcion<<endl;
    k<<"ISBN: "<<*ISBN<<endl;
    k<<"Cantidad de Ejemplares: "<<*CantE<<endl;
    k<<"------------------"<<endl;

    return k.str();

}
Libro::~Libro()
{
    //dtor
}

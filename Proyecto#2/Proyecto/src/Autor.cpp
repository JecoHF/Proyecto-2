#include "Autor.h"

Autor::Autor()
{
    IdAutor=new string();
    NombreA=new string();
    Especialidad=new string();
    CantPub=new string();
}

//Métodos set:

void Autor::setIdAutor(string *IdAutor){
    this->IdAutor=IdAutor;
}
void Autor::setNombreA(string *NombreA){
    this->NombreA=NombreA;
}
void Autor::setEspecialidad(string *Especialidad){
    this->Especialidad=Especialidad;
}
void Autor::setCantPub(string *CantPub){
    this->CantPub=CantPub;
}

//Métodos get:

string Autor::getIdAutor(){
    return *IdAutor;
}
string Autor::getNombreA(){
    return *NombreA;
}
string Autor::getEspecialidad(){
    return *Especialidad;
}
string Autor::getCantPub(){
    return *CantPub;
}

//Métodos adicionales:

string Autor::toStringAutor(){

    stringstream j;

    j<<"Datos del autor: "<<endl;
    j<<"Id: "<<*IdAutor<<endl;
    j<<"Nombre: "<<*NombreA<<endl;
    j<<"Area de Especialidad: "<<*Especialidad<<endl;
    j<<"Cantidad de publicaciones: "<<*CantPub<<endl;

    return j.str();
}
Autor::~Autor()
{
    //dtor
}

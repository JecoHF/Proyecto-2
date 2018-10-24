#include "Autor.h"

Autor::Autor()
{
    IdAutor=new string();
    NombreAutor=new string();
    AreaEsp=new string();
    CantPub=new string();
}
Autor::Autor(string *IdAutor, string *NombreAutor, string *AreaEsp, string *CantPub){
    this->IdAutor=IdAutor;
    this->NombreAutor=NombreAutor;
    this->AreaEsp=AreaEsp;
    this->CantPub=CantPub;

}

//Metodos set:

void Autor::setIdAutor(string *IdAutor){
    this->IdAutor=IdAutor;
}
void Autor::setNombreAutor(string *NombreAutor){
    this->NombreAutor=NombreAutor;
}
void Autor::setAreaEsp(string *AreaEsp){
    this->AreaEsp=AreaEsp;
}
void Autor::setCantPub(string *CantPub){
    this->CantPub=CantPub;
}

//Metodos get:

string Autor::getIdAutor(){
    return *IdAutor;
}
string Autor::getNombreAutor(){
    return *NombreAutor;
}
string Autor::getAreaEsp(){
    return *AreaEsp;
}
string Autor::getCantPub(){
    return *CantPub;
}

//Metodos adicionales:

string Autor::toStringAutor(){
    stringstream d;
    d<<endl;
    d<<"----------------------"<<endl;
    d<<"Datos del autor:"<<endl;
    d<<"Id: "<<*IdAutor<<endl;
    d<<"Nombre: "<<*NombreAutor<<endl;
    d<<"Area de Especialidad: "<<*AreaEsp<<endl;
    d<<"Cantidad de Publicaciones: "<<*CantPub<<endl;
    d<<"----------------------"<<endl;

    return d.str();

}

Autor::~Autor()
{
    //dtor
}

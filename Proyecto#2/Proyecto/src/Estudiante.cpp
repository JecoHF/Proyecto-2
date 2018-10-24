#include "Estudiante.h"

Estudiante::Estudiante()
{
   IdEst= new string();
   edad=new string();
   nombre=new string();
   direccion=new string();
   email=new string();
   carrera=new string();
   promedio=new string();

}

//Métodos set:

void Estudiante::setIdEst(string *IdEst){
    this->IdEst=IdEst;
}
void Estudiante::setEdad(string *Edad){
    this->edad=Edad;
}
void Estudiante::setNombre(string *Nombre){
    this->nombre=Nombre;
}
void Estudiante::setDireccion(string *Direccion){
    this->direccion=Direccion;
}
void Estudiante::setEmail(string *Email){
    this->email=Email;
}
void Estudiante::setCarrera(string *Carrera){
    this->carrera=Carrera;
}
void Estudiante::setPromedio(string *promedio){
    this->promedio=promedio;
}

//Métodos get:

string Estudiante::getIdEst(){
    return *IdEst;
}
string Estudiante::getEdad(){
    return *edad;
}
string Estudiante::getNombre(){
    return *nombre;
}
string Estudiante::getDireccion(){
    return *direccion;
}
string Estudiante::getEmail(){
    return *email;
}
string Estudiante::getCarrera(){
    return *carrera;
}
string Estudiante::getPromedio(){
    return *promedio;
}

//Métodos adicionales:

string Estudiante::toStringEst(){
    stringstream l;

    l<<endl;
    l<<"----------------------"<<endl;
    l<<"Datos del estudiante: "<<endl;
    l<<"Id: "<<*IdEst<<endl;
    l<<"Nombre: "<<*nombre<<endl;
    l<<"Edad: "<<*edad<<endl;
    l<<"Direccion: "<<*direccion<<endl;
    l<<"Email: "<<*email<<endl;
    l<<"Carrera: "<<*carrera<<endl;
    l<<"Promedio ponderado: "<<*promedio<<endl;
    l<<"----------------------"<<endl;

    return l.str();
}
Estudiante::~Estudiante()
{
    //dtor
}

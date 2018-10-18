#include "Interfaz.h"

Interfaz::Interfaz()
{
    ListEst=new ListaEstudiante;
}
void Interfaz::MenuEstudiante(){
    int ope=1;
    while(ope==1){
    Estudiante *Estudi=new Estudiante;
    string *idEn=new string();
    string *NoEn=new string();
    int *EdEn=new int;
    string *DirEn=new string();
    string *EmaEn=new string();
    string *Caren=new string();
    float *ProEn=new float;


    system("cls");
    cout<<"Digite el id: ";
    cin>>*idEn;
    cout<<endl;
    cout<<"Digite el Nombre: ";
    cin>>*NoEn;
    cout<<endl;
    cout<<"Digite la edad: ";
    cin>>*EdEn;
    cout<<endl;
    cout<<"Digite la Direccion: ";
    cin>>*DirEn;
    cout<<endl;
    cout<<"Digite el Email: ";
    cin>>*EmaEn;
    cout<<endl;
    cout<<"Digite la Carrera: ";
    cin>>*Caren;
    cout<<endl;
    cout<<"Digite el Promedio: ";
    cin>>*ProEn;
    cout<<endl;

    Estudi->setIdEst(idEn);
    Estudi->setNombre(NoEn);
    Estudi->setEdad(EdEn);
    Estudi->setDireccion(DirEn);
    Estudi->setEmail(EmaEn);
    Estudi->setCarrera(Caren);
    Estudi->setPromedio(ProEn);

    ListEst->AgregarEstudiante(Estudi);
    ListEst->VerTodosEstudiantes();
    cin.get();
    cout<<endl;
    cout<<"Desea agregar otro estudiante? "<<endl;
    cout<<"1.Si 2.No ";
    cin>>ope;
    }
}
Interfaz::~Interfaz()
{
    //dtor
}

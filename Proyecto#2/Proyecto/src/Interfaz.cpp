#include "Interfaz.h"

Interfaz::Interfaz()
{
    ListEst=new ListaEstudiante;
}
void Interfaz::MenuEstudiante(){
    int opME;
    bool auxE=1;

    while(auxE==1){
    system("cls");
    cout <<endl <<endl;
    cout<<"Digite la accion que desea realizar: "<<endl;
    cout<<"1. Agregar un nuevo estudiante"<<endl;
    cout<<"2. Ver la lista de todos los estudiantes"<<endl;
    cout<<"3. Ver los datos de un estudiante"<<endl;
    cout<<"4. Modificar los datos de un estudiante"<<endl;
    cout<<"5. Eliminar un estudiante"<<endl;
    cout<<"6. Volver al menu principal"<<endl <<endl;
    cin>>opME;
    switch(opME){
    case 1:{
    int ope=1;
    while(ope==1){
    Estudiante *Estudi=new Estudiante;
    string *idEn=new string();
    string *NoEn=new string();
    string *EdEn=new string();
    string *DirEn=new string();
    string *EmaEn=new string();
    string *Caren=new string();
    string *ProEn=new string();


    system("cls");
    cout <<endl;
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
    break;
    }

    case 2:{
        ListEst->VerTodosEstudiantes();
        cin.get();
        break;
    }
    case 3:{
        ListEst->VerEstudiante();
        cin.get();
        break;
    }
    case 4:{
        ListEst->ModificarEstudiante();
        cin.get();
        break;
    }
    case 5:{
       // ListEst->EliminarEstudiante();
        break;
    }
    case 6:{
        auxE=0;
        break;
    }
    default:{
        cout<<"Opcion inexistente, por favor intentelo de nuevo";
        cin.get();
        break;
    }
    }
    }
}
Interfaz::~Interfaz()
{
    //dtor
}

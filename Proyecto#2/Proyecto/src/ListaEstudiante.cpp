#include "ListaEstudiante.h"

ListaEstudiante::ListaEstudiante()
{
    RaizE=NULL;
}

void ListaEstudiante::AgregarEstudiante(Estudiante *Est){
    NodoEstudiante *NuevoE=new NodoEstudiante;
    NuevoE->setEst(Est);
    NuevoE->setSigE(NULL);

    NodoEstudiante *temp=RaizE;

    if(temp){
        while(temp->getSigE()){
            temp=temp->getSigE();
        }
        temp->setSigE(NuevoE);
    }
    else {
        RaizE=NuevoE;
    }
}
void ListaEstudiante::VerTodosEstudiantes(){
    NodoEstudiante *temp=RaizE;

    if(temp==NULL){
        cout<<endl;
        cout<<"Lista vacia";
    }
    else if(temp->getSigE() == NULL){
        cout<<temp->getEst()->toStringEst();
        cin.get();
    }
    else{
        cout<<"Lista completa de estudiantes:"<<endl;
        cin.get();
        while(temp){
            cout<<temp->getEst()->toStringEst()<<endl;
            temp=temp->getSigE();
        }
    }
}
void ListaEstudiante::VerEstudiante(){
    string idU;
    NodoEstudiante *temp=RaizE;
    cout<<"Digite el id del estudiante que desea ver ";
    cin>>idU;

    while(temp->getEst()->getIdEst() != idU){
        temp=temp->getSigE();
    }
    if(temp){
    cout<<temp->getEst()->toStringEst();
    cin.get();
    }
    else if(temp->getEst()->getIdEst() != idU && temp->getSigE()==NULL){
        cout<<"Estudiante inexistente"<<endl;
    }
}
void ListaEstudiante::ModificarEstudiante(){
    string idM;
    cout<<"Digite el id del estudiante que desea modificar ";
    cin>>idM;

    NodoEstudiante *temp=RaizE;

    while(temp->getEst()->getIdEst() != idM){
        temp=temp->getSigE();
    }
    int op=1;
    while(op==1){
    system("cls");
    cout<<"Digite el numero del dato que desea modificar "<<endl;
    cout<<"1.Id"<<endl;
    cout<<"2.Nombre"<<endl;
    cout<<"3.Edad"<<endl;
    cout<<"4.Direccion"<<endl;
    cout<<"5.Email"<<endl;
    cout<<"6.Carrera"<<endl;
    cout<<"7.Promedio"<<endl;
    cin>>op;

    switch(op){
        case 1:{
            string *idC=new string();
            cout<<"Digite el nuevo Id ";
            cin>>*idC;
            temp->getEst()->setIdEst(idC);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        case 2:{
            string *Nom=new string();
            cout<<"Digite el nuevo Nombre ";
            cin>>*Nom;
            temp->getEst()->setNombre(Nom);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        case 3:{
            int *Ed=new int;
            cout<<"Digite la nueva edad ";
            cin>>*Ed;
            temp->getEst()->setEdad(Ed);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        case 4:{
            string *dir=new string();
            cout<<"Digite la nueva direccion ";
            cin>>*dir;
            temp->getEst()->setDireccion(dir);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        case 5:{
            string *ema=new string();
            cout<<"Digite el nuevo email ";
            cin>>*ema;
            temp->getEst()->setEmail(ema);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        case 6:{
            string *Carr=new string();
            cout<<"Digite la nueva carrera ";
            cin>>*Carr;
            temp->getEst()->setCarrera(Carr);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        case 7:{
            float *prom=new float;
            cout<<"Digite el nuevo promedio ";
            cin>>*prom;
            temp->getEst()->setPromedio(prom);
            cout<<"Desea cambiar otro dato del mismo estudiante?"<<endl;
            cout<<"1.Si 2.No ";
            cin>>op;
            break;
        }
        default:{
            cout<<"Opcion no encontrada, por favor vuelva a intentarlo"<<endl;
            cin.get();
            op=1;
            break;
        }
    }

    }
    cout<<"Datos del estudiante con la modificacion: "<<endl;
    cout<<temp->getEst()->toStringEst();
    cin.get();
}
ListaEstudiante::~ListaEstudiante()
{
    //dtor
}

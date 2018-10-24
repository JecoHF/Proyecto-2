#include "ListaEstudiante.h"

ListaEstudiante::ListaEstudiante()
{
    RaizE=NULL;
}

void ListaEstudiante::AgregarEstudiante(Estudiante *Est){

    NodoEstudiante *temp=RaizE;
    while (temp){
        string *idr=new string("aa");
        if(temp->getEst()->getIdEst() == Est->getIdEst()){
            system("cls");
            cout<<"Id existente, digite un id diferente"<<endl;
            cin>>*idr;
            Est->setIdEst(idr);
        }
        temp=temp->getSigE();
        if(*idr !="aa"){
            temp=RaizE;
        }
    }
    NodoEstudiante *NuevoE=new NodoEstudiante;
    NuevoE->setEst(Est);
    NuevoE->setSigE(NULL);
    temp=RaizE;

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
        cout<<"Lista vacia" <<endl <<endl;
        system("pause");
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
    bool encontrado = false;
    NodoEstudiante *temp=RaizE;

    if(temp == NULL){
        cout <<endl;
        cout <<"La lista esta vacia" <<endl <<endl;
        system("pause");
    }
    if(temp != NULL){
        cout<<"Digite el id del estudiante que desea ver ";
        cin>>idU;
            while(temp != NULL && encontrado != true){
                if(temp->getEst()->getIdEst() == idU){
                    cout<<temp->getEst()->toStringEst();
                    cin.get();
                    encontrado = true;
                }
            temp=temp->getSigE();
            }
        if(encontrado == false){
            cout <<endl;
            cout <<"El id digitado no se encuentra en la lista" <<endl <<endl;
            system("pause");
        }
    }
}
void ListaEstudiante::ModificarEstudiante(){
    NodoEstudiante *temp = RaizE;
    int opcion;
    bool encontrado = false;
    string id;
    string *edad1 = new string;
    string *nombre1 = new string;
    string *direccion1 = new string;
    string *email1 = new string;
    string *carrera1 = new string;
    string *promedio1 = new string;

    if(temp == NULL){
        cout <<endl;
        cout <<"La lista esta vacia" <<endl <<endl;
        system("pause");
    }
        if(temp != NULL){
            cout <<endl;
            cout <<"Ingrese el id del Estudiante que desea modificar: ";
            cin >>id;
            while(temp != NULL && encontrado != true){
                if(temp->getEst()->getIdEst() == id){
                cout <<endl <<endl;
                cout <<"Aspectos a modificar" <<endl;
                cout<<"1.Id"<<endl;
                cout<<"2.Nombre"<<endl;
                cout<<"3.Edad"<<endl;
                cout<<"4.Direccion"<<endl;
                cout<<"5.Email"<<endl;
                cout<<"6.Carrera"<<endl;
                cout<<"7.Promedio"<<endl <<endl;
                cout <<"Escoja la opcion que desea: ";
                cin >>opcion;
                    switch(opcion){
                        case 1:{
                            string *id1 = new string;
                            cout <<endl;
                            cout <<"Digite el nuevo ID: ";
                            cin >>*id1;
                            temp->getEst()->setIdEst(id1);
                        break;
                        }
                        case 2:{
                            cout <<endl;
                            cout <<"Digite el nuevo Nombre: ";
                            cin >>*nombre1;
                            temp->getEst()->setNombre(nombre1);
                        break;
                        }
                        case 3:{
                            cout <<endl;
                            cout <<"Digite la nueva Edad: ";
                            cin >>*edad1;
                            temp->getEst()->setEdad(edad1);
                        break;
                        }
                        case 4:{
                            cout <<endl;
                            cout<<"Digite la nueva direccion ";
                            cin >>*direccion1;
                            temp->getEst()->setDireccion(direccion1);
                        break;
                        }
                        case 5:{
                            cout <<endl;
                            cout<<"Digite el nuevo email ";
                            cin >>*email1;
                            temp->getEst()->setEmail(email1);
                        break;
                        }
                        case 6:{
                            cout <<endl;
                            cout<<"Digite la nueva carrera ";
                            cin >>*carrera1;
                            temp->getEst()->setCarrera(carrera1);
                        break;
                        }
                        case 7:{
                            cout <<endl;
                            cout<<"Digite el nevo promedio ";
                            cin >>*promedio1;
                            temp->getEst()->setPromedio(promedio1);
                        break;
                        }
                        default:{
                            cout<<"Opcion no encontrada, por favor vuelva a intentarlo"<<endl;
                            cin.get();
                        break;
                        }
                        system("cls");
                }//end switch
            encontrado = true;
            cout <<endl;
            cout <<"Datos del estudiante modificados:" <<endl <<endl;
            cout <<temp->getEst()->toStringEst();
            system("pause");
            }//end if
            temp = temp->getSigE();
        } //end while
        if(encontrado == false){
            cout <<endl;
            cout <<"El id digitado no se encuentra en la lista" <<endl <<endl;
            system("pause");
        }//end if
    }//end if
}
ListaEstudiante::~ListaEstudiante()
{
    //dtor
}

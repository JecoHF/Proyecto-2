#include "ListaAutor.h"

ListaAutor::ListaAutor()
{
    raizA=NULL;
}

void ListaAutor::AgregarAutor(Autor *Auto){
        NodoAutor *temp=raizA;

        while (temp){
        string *idr=new string("aa");
        if(temp->getAuto()->getIdAutor() == Auto->getIdAutor()){
            system("cls");
            cout<<"Id existente, digite un id diferente"<<endl;
            cin>>*idr;
            Auto->setIdAutor(idr);
        }
        temp=temp->getSigA();
        if(*idr !="aa"){
            temp=raizA;
        }
    }
    NodoAutor *NuevoA=new NodoAutor;
    NuevoA->setAuto(Auto);
    NuevoA->setSigA(NULL);
    temp=raizA;


    if(temp){
        while(temp->getSigA()){
            temp=temp->getSigA();
        }
        temp->setSigA(NuevoA);
    }
    else {
        raizA=NuevoA;
    }

    temp=raizA;
    ofstream archivo;

    archivo.open("Autor.txt",ios::out);
    while(temp){
        archivo<<temp->getAuto()->toStringAutor();
        temp=temp->getSigA();
    }
    archivo.close();
}
void ListaAutor::VerTodosAutores(){
        NodoAutor *temp=raizA;

    if(temp==NULL){
        cout<<endl;
        cout<<"Lista vacia" <<endl <<endl;
        system("pause");
    }
    else if(temp->getSigA() == NULL){
        cout<<temp->getAuto()->toStringAutor();
        cin.get();
    }
    else{
        cout<<"Lista completa de estudiantes:"<<endl;
        cin.get();
        while(temp){
            cout<<temp->getAuto()->toStringAutor()<<endl;
            temp=temp->getSigA();
        }
    }


}
void ListaAutor::VerAutor(){
     string idA;
    bool encontrado = false;
    NodoAutor *temp=raizA;

    if(temp == NULL){
        cout <<endl;
        cout <<"La lista esta vacia" <<endl <<endl;
        system("pause");
    }
    if(temp != NULL){
        cout<<"Digite el id del autor que desea ver ";
        cin>>idA;
            while(temp != NULL && encontrado != true){
                if(temp->getAuto()->getIdAutor() == idA){
                    cout<<temp->getAuto()->toStringAutor();
                    cin.get();
                    encontrado = true;
                }
            temp=temp->getSigA();
            }
        if(encontrado == false){
            cout <<endl;
            cout <<"El id digitado no se encuentra en la lista" <<endl <<endl;
            system("pause");
        }
    }
}

void ListaAutor::ModificarAutor(){
     NodoAutor *temp = raizA;
    int opcion;
    bool encontrado = false;
    string id;
    string *nombre1 = new string;
    string *Area = new string;
    string *Can = new string;


    if(temp == NULL){
        cout <<endl;
        cout <<"La lista esta vacia" <<endl <<endl;
        system("pause");
    }
        if(temp != NULL){
            cout <<endl;
            cout <<"Ingrese el id del autor que desea modificar: ";
            cin >>id;
            while(temp != NULL && encontrado != true){
                if(temp->getAuto()->getIdAutor() == id){
                cout <<endl <<endl;
                cout <<"Aspectos a modificar" <<endl;
                cout<<"1.Id"<<endl;
                cout<<"2.Nombre"<<endl;
                cout<<"3.Area de Especialidad"<<endl;
                cout<<"4.Cantidad de publicaciones"<<endl;
                cout <<"Escoja la opcion que desea: ";
                cin >>opcion;
                    switch(opcion){
                        case 1:{
                            string *id1 = new string;
                            cout <<endl;
                            cout <<"Digite el nuevo ID: ";
                            cin >>*id1;
                            temp->getAuto()->setIdAutor(id1);
                        break;
                        }
                        case 2:{
                            cout <<endl;
                            cout <<"Digite el nuevo Nombre: ";
                            cin >>*nombre1;
                            temp->getAuto()->setNombreAutor(nombre1);
                        break;
                        }
                        case 3:{
                            cout <<endl;
                            cout <<"Digite la nueva Area de Especialidad: ";
                            cin >>*Area;
                            temp->getAuto()->setAreaEsp(Area);
                        break;
                        }
                        case 4:{
                            cout <<endl;
                            cout<<"Digite la nueva cantidad de Publicaciones ";
                            cin >>*Can;
                            temp->getAuto()->setCantPub(Can);
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
            cout <<"Datos del autor modificados:" <<endl <<endl;
            cout <<temp->getAuto()->toStringAutor();
            system("pause");
            }//end if
            temp = temp->getSigA();
        } //end while
        if(encontrado == false){
            cout <<endl;
            cout <<"El id digitado no se encuentra en la lista" <<endl <<endl;
            system("pause");
        }//end if
    }//end if
}
void ListaAutor::EliminarAutor(){

    NodoAutor *temp = raizA;
    NodoAutor *q = NULL;
    string id="";


    if(raizA == NULL)
    {
        cout << "La lista esta vacia, no se puede borrar" << endl;
        return;
    }

    cout <<endl;
    cout <<"Ingrese el id del Autor que desea eliminar: ";
    cin >>id;

    if(raizA->getAuto()->getIdAutor() == id)
    {
        raizA = raizA->getSigA();
        delete temp;
        cout << "Autor Borrado" << endl;
        cin.get();
        return;
    }
    q = raizA;
    while(q->getSigA()->getSigA() != NULL)
    {

        if(q->getSigA()->getAuto()->getIdAutor() == id)
        {
            temp = q->getSigA();
            q->setSigA(temp->getSigA());
            delete temp;
            cout<<"Autor Borrado"<<endl;
            cin.get();
            return;
        }
        q = q->getSigA();
    }
    if (q->getSigA()->getAuto()->getIdAutor() == id)
    {
        temp = q->getSigA();
        delete temp;
        q->setSigA(NULL);
        cout<<"Autor borrado!"<<endl;
        cin.get();
        return;
    }
    cout<<"El Autor "<<id<<" no existe"<<endl;
    cin.get();
}
ListaAutor::~ListaAutor()
{
    //dtor
}

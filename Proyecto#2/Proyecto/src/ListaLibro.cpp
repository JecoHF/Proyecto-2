#include "ListaLibro.h"

ListaLibro::ListaLibro()
{
    raizLi=NULL;
}
void ListaLibro::AgregarLibro(Libro *lib){
        NodoLibro *temp=raizLi;

        while (temp){
        string *idr=new string("aa");
        if(temp->getLib()->getIdLib() == lib->getIdLib()){
            system("cls");
            cout<<"Id existente, digite un id diferente"<<endl;
            cin>>*idr;
            lib->setIdLib(idr);
        }
        temp=temp->getSigLi();
        if(*idr !="aa"){
            temp=raizLi;
        }
    }
    NodoLibro *NuevoL=new NodoLibro;
    NuevoL->setLib(lib);
    NuevoL->setSigLi(NULL);
    temp=raizLi;


    if(temp){
        while(temp->getSigLi()){
            temp=temp->getSigLi();
        }
        temp->setSigLi(NuevoL);
    }
    else {
        raizLi=NuevoL;
    }
}
void ListaLibro::VerTodosLibros(){

            NodoLibro *temp=raizLi;

    if(temp==NULL){
        cout<<endl;
        cout<<"Lista vacia" <<endl <<endl;
        system("pause");
    }
    else if(temp->getSigLi() == NULL){
        cout<<temp->getLib()->toStringLibro();
        cin.get();
    }
    else{
        cout<<"Lista completa de Libros:"<<endl;
        cin.get();
        while(temp){
            cout<<temp->getLib()->toStringLibro()<<endl;
            temp=temp->getSigLi();
        }
    }
}
void ListaLibro::VerLibro(){
     string idA;
    bool encontrado = false;
    NodoLibro *temp=raizLi;

    if(temp == NULL){
        cout <<endl;
        cout <<"La lista esta vacia" <<endl <<endl;
        system("pause");
    }
    if(temp != NULL){
        cout<<"Digite el id del libro que desea ver ";
        cin>>idA;
            while(temp != NULL && encontrado != true){
                if(temp->getLib()->getIdLib() == idA){
                    cout<<temp->getLib()->toStringLibro();
                    cin.get();
                    encontrado = true;
                }
            temp=temp->getSigLi();
            }
        if(encontrado == false){
            cout <<endl;
            cout <<"El id digitado no se encuentra en la lista" <<endl <<endl;
            system("pause");
        }
    }

}
void ListaLibro::ModificarLibro(){
  NodoLibro *temp = raizLi;
    int opcion;
    bool encontrado = false;
    string id;
    string *desc = new string;
    string *IS = new string;
    string *Can = new string;


    if(temp == NULL){
        cout <<endl;
        cout <<"La lista esta vacia" <<endl <<endl;
        system("pause");
    }
        if(temp != NULL){
            cout <<endl;
            cout <<"Ingrese el id del libro que desea modificar: ";
            cin >>id;
            while(temp != NULL && encontrado != true){
                if(temp->getLib()->getIdLib() == id){
                cout <<endl <<endl;
                cout <<"Aspectos a modificar" <<endl;
                cout<<"1.Id"<<endl;
                cout<<"2.Descripcion"<<endl;
                cout<<"3.ISBN"<<endl;
                cout<<"4.Cantidad de ejemplares"<<endl;
                cout <<"Escoja la opcion que desea: ";
                cin >>opcion;
                    switch(opcion){
                        case 1:{
                            string *id1 = new string;
                            cout <<endl;
                            cout <<"Digite el nuevo ID: ";
                            cin >>*id1;
                            temp->getLib()->setIdLib(id1);
                        break;
                        }
                        case 2:{
                            cout <<endl;
                            cout <<"Digite la nueva descripcion: ";
                            cin >>*desc;
                            temp->getLib()->setDescripcion(desc);
                        break;
                        }
                        case 3:{
                            cout <<endl;
                            cout <<"Digite el nuevo ISBN: ";
                            cin >>*IS;
                            temp->getLib()->setISBN(IS);
                        break;
                        }
                        case 4:{
                            cout <<endl;
                            cout<<"Digite la nueva cantidad de ejemplares ";
                            cin >>*Can;
                            temp->getLib()->setCantE(Can);
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
            cout <<temp->getLib()->toStringLibro();
            system("pause");
            }//end if
            temp = temp->getSigLi();
        } //end while
        if(encontrado == false){
            cout <<endl;
            cout <<"El id digitado no se encuentra en la lista" <<endl <<endl;
            system("pause");
        }//end if
    }//end if

}
ListaLibro::~ListaLibro()
{
    //dtor
}

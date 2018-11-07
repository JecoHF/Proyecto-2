#include "Interfaz.h"

Interfaz::Interfaz()
{
    ListEst=new ListaEstudiante;
    ListA=new ListaAutor;
    ListLi=new ListaLibro;
}
void Interfaz::MenuEstudiante(){
    char opME;
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
    case '1':{
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
    cin.ignore();
    getline(cin,*NoEn);
    cout<<endl;
    cout<<"Digite la edad: ";
    cin>>*EdEn;
    cout<<endl;
    cout<<"Digite la Direccion: ";
    cin.ignore();
    getline(cin,*DirEn);
    cout<<endl;
    cout<<"Digite el Email: ";
    cin>>*EmaEn;
    cout<<endl;
    cout<<"Digite la Carrera: ";
    cin.ignore();
    getline(cin,*Caren);
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
    ListEst->ArchivoEstudiante();
    break;
    }

    case '2':{
        system("cls");
        ListEst->VerTodosEstudiantes();
        cin.get();
        break;
    }
    case '3':{
        system("cls");
        ListEst->VerEstudiante();
        cin.get();
        break;
    }
    case '4':{
        system("cls");
        ListEst->ModificarEstudiante();
        ListEst->ArchivoEstudiante();
        cin.get();
        break;
    }
    case '5':{
        system("cls");
        ListEst->EliminarEstudiante();
        ListEst->ArchivoEstudiante();
        cin.get();
        break;

    }
    case '6':{
        auxE=0;
        break;
    }
    default:{
        cout<<"Opcion inexistente, por favor intentelo de nuevo" <<endl <<endl;
        system("pause");
        break;
    }
    }
    }
}
void Interfaz::MenuAutor(){
    char opMA;
    bool auxA=1;

    while(auxA==1){
    system("cls");
    cout <<endl <<endl;
    cout<<"Digite la accion que desea realizar: "<<endl;
    cout<<"1. Agregar un nuevo autor"<<endl;
    cout<<"2. Ver la lista de todos los autores"<<endl;
    cout<<"3. Ver los datos de un autor"<<endl;
    cout<<"4. Modificar los datos de un autor"<<endl;
    cout<<"5. Eliminar un autor"<<endl;
    cout<<"6. Volver al menu principal"<<endl <<endl;
    cin>>opMA;
    switch(opMA){
    case '1':{
    int ope=1;
    while(ope==1){
    Autor *Aut=new Autor;
    string *idEn=new string();
    string *NoEn=new string();
    string *AEEn=new string();
    string *CPEn=new string();



    system("cls");
    cout <<endl;
    cout<<"Digite el id: ";
    cin>>*idEn;
    cout<<endl;
    cout<<"Digite el Nombre: ";
    cin.ignore();
    getline(cin,*NoEn);
    cout<<endl;
    cout<<"Digite el area de especialidad: ";
    getline(cin,*AEEn);
    cout<<endl;
    cout<<"Digite la cantidad de publicaciones realizadas: ";
    cin>>*CPEn;
    cout<<endl;


    Aut->setIdAutor(idEn);
    Aut->setNombreAutor(NoEn);
    Aut->setAreaEsp(AEEn);
    Aut->setCantPub(CPEn);


    ListA->AgregarAutor(Aut);
    ListA->VerTodosAutores();
    cin.get();
    cout<<endl;
    cout<<"Desea agregar otro autor? "<<endl;
    cout<<"1.Si 2.No ";
    cin>>ope;
    }
    ListA->ArchivoAutor();
    break;
    }

    case '2':{
        system("cls");
        ListA->VerTodosAutores();
        cin.get();
        break;
    }
    case '3':{
        system("cls");
        ListA->VerAutor();
        cin.get();
        break;
    }
    case '4':{
        system("cls");
        ListA->ModificarAutor();
        ListA->ArchivoAutor();
        cin.get();
        break;
    }
    case '5':{
        system("cls");
        ListA->EliminarAutor();
        ListA->ArchivoAutor();
        cin.get();
        break;

    }
    case '6':{
        auxA=0;
        break;
    }
    default:{
        cout<<"Opcion inexistente, por favor intentelo de nuevo" <<endl <<endl;
        system("pause");
        break;
    }
    }
    }

}
void Interfaz::MenuLibro(){
    char opML;
    bool auxA=1;

    while(auxA==1){
    system("cls");
    cout <<endl <<endl;
    cout<<"Digite la accion que desea realizar: "<<endl;
    cout<<"1. Agregar un nuevo libro"<<endl;
    cout<<"2. Ver la lista de todos los libros"<<endl;
    cout<<"3. Ver los datos de un libro"<<endl;
    cout<<"4. Modificar los datos de un libro"<<endl;
    cout<<"5. Eliminar un libro"<<endl;
    cout<<"6. Volver al menu principal"<<endl <<endl;
    cin>>opML;
    switch(opML){
    case '1':{
    int ope=1;
    while(ope==1){
    Libro *Libr=new Libro;
    string *idEn=new string();
    string *De=new string();
    string *ISB=new string();
    string *CE=new string();



    system("cls");
    cout <<endl;
    cout<<"Digite el id: ";
    cin>>*idEn;
    cout<<endl;

    cout<<"Digite la descripcion: ";
    cin.ignore();
    getline(cin,*De);
    cout<<endl;
    cout<<"Digite el ISBN: ";
    cin>>*ISB;
    cout<<endl;
    cout<<"Digite la cantidad de ejemplares disponibles: ";
    cin>>*CE;
    cout<<endl;


    Libr->setIdLib(idEn);
    Libr->setDescripcion(De);
    Libr->setISBN(ISB);
    Libr->setCantE(CE);


    ListLi->AgregarLibro(Libr);
    ListLi->VerTodosLibros();
    cin.get();
    cout<<endl;
    cout<<"Desea agregar otro libro? "<<endl;
    cout<<"1.Si 2.No ";
    cin>>ope;
    }
    ListLi->ArchivoLibro();
    break;
    }

    case '2':{
        system("cls");
        ListLi->VerTodosLibros();
        cin.get();
        break;
    }
    case '3':{
        system("cls");
        ListLi->VerLibro();
        cin.get();
        break;
    }
    case '4':{
        system("cls");
        ListLi->ModificarLibro();
        ListLi->ArchivoLibro();
        cin.get();
        break;
    }
    case '5':{
        system("cls");
        ListLi->EliminarLibro();
        ListLi->ArchivoLibro();
        cin.get();
        break;
    }
    case '6':{
        auxA=0;
        break;
    }
    default:{
        cout<<"Opcion inexistente, por favor intentelo de nuevo" <<endl <<endl;
        system("pause");
        break;
    }
    }
    }

}


void Interfaz::MenuPrincipal(){

    bool sal=1;

    while (sal==1){
       system("cls");
       char opmp;
    cout<<endl<<endl;
    cout<<"        Bienvenido al sistema IMEC"<<endl;
    cout<<"  Digite el menu que desea usar: "<<endl;
    cout<<"1. Estudiante"<<endl;
    cout<<"2. Autor"<<endl;
    cout<<"3. Libro"<<endl;
    cout<<"4. Salir del sistema"<<endl;
    cin>>opmp;

    switch(opmp){
        case '1':{
            MenuEstudiante();
            break;
        }//fin case 1
        case '2':{
            MenuAutor();
            break;
        }//fin case 2
        case '3':{
            MenuLibro();
            break;
        }//fin case 4
        case '4':{
            system("cls");
            cout<<endl<<endl;
            cout<<"               Gracias por haber usado nuestro sistema" <<endl;
            cin.get();
            sal=0;
            break;
        }//fin case 4
        default:{
            system("cls");
            cout<<endl<<endl;
            cout<<"Opcion inexistente, por favor vuelva a intentarlo" <<endl <<endl;
            system("pause");
            break;
        }//fin default
    }//Fin switch
    }//fin while
}


Interfaz::~Interfaz()
{
    //dtor
}

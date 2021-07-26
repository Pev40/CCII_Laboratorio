#include<iostream>
#include<list>
#include "Iterator.h"
using namespace std;
int main(){

    /*
     * EJEMPLO CON LINKEDLIST
     * 
     * */
    //CARGAR UNA LISTA GENERICA
    LinkedList <int>lista1;
    lista1.insertBegin(5);
    lista1.insertBegin(10);
    lista1.insertBegin(19);
    lista1.insertBegin(11);
    lista1.insertBegin(15);
    lista1.insertBegin(29);
    lista1.insertBegin(18);
    lista1.insertBegin(1);
    lista1.insertEnd(3);
    lista1.insertEnd(9);
    lista1.insertBegin(13);
    lista1.insertEnd(178);
    //USO DE COPIA
    LinkedList<int> lista2=lista1;
    //MOSTRAR POR SOBRECARGA
    cout<<lista1<<endl<<endl;
    //Iteracion mediante direcciones  
    for (Node<int>*i=lista1.begin();i!=nullptr; i=i->getNext()){
        cout<<*i<<endl;
    }
    cout<<endl;
    //Lectura por iteración
    for (int i=0;i<lista1.getLongitud();++i){
        cout<<*lista1[i]<<endl;
    }
    cout<<endl;
    //ELIMINACION POR POSICION
    lista1.deleteToPosition(4);
    cout<<lista1<<endl;
    //OBTERNER LONGITUD
    cout<<lista1.getLongitud()<<endl;
    
    /*
     * EJEMPLO CON PATRON ITERADOR
     * 
     * */

    Iterator<int> iterador;
    for(iterador=lista1.begin();iterador!=nullptr;iterador++){
        cout<<iterador;
    }
    //BORRAR EL INICIO Y FIN DE LA LISTA
    lista1.deleteBegin();
    lista1.deleteEnd();
    //MOSTRAR
    cout<<lista1<<endl;
    cout<<lista1.getLongitud()<<endl<<endl;
    //DESTRUIR
    lista1.~LinkedList();
    if (lista1.vacio())
    {
        cout<<"La lista esta vacia "<<endl;
    }
    else
    {
        cout<<"La lista no esta vacia "<<endl;
    }


    /**
     * COMPARACION CON LIBRERIAS STL Y MI LISTA
    */
    LinkedList<string> myTeam;
    myTeam.insertBegin("Fiorela");
    myTeam.insertBegin("Merisabel");
    myTeam.insertBegin("Rushell");
    myTeam.insertEnd("Piero");
    cout<<myTeam<<endl;
    list <string> myStaff;
    myStaff.push_back("Meri");
    myStaff.push_back("Andres");
    myStaff.push_back("Fio");
    myStaff.push_back("Rushell");
    cout << myStaff.size() << endl;
    myStaff.pop_back();
    cout << myStaff.size() << endl;

    return 0;
}
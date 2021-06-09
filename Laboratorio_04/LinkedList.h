#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "Node.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
namespace std;
class LinkedList
{
private:
    int size;
    Node *head;
public:
    LinkedList(/* args */);
    ~LinkedList();
    setSize();
    insert();
    void print();
    void ordenar(Node,Node);

};

LinkedList::LinkedList()
{
    this->size=0;
    this->head = nullptr;
}

LinkedList::setSize(){
    return (this->size)++;
}

void LinkedList::ordenar(Nodo fijo, Nodo nuevo){

    if (fijo->next == nullptr)
    {
        fijo->next = nuevo;
        return;
    }else if (fijo->elem < nuevo->elem and fijo->next->elem > nuevo->elem)
    {
       return ordenar(fijo->next , nuevo);
    }
    else if (fijo->elem > nuevo->elem)
    {
        nuevo->next = fijo->next;
        fijo->next = nuevo;
        return;
    }
    


}

LinkedList::insert(Node nodo);
{
    if(this->head == nullptr){
        this->head = nodo;
    }else{
        ordenar(this->head, nodo)
    }       
}


void LinkedList::print(Node nodo){
    if(nodo->next == nullptr){
        std::out<<nodo->elem;
        return ;
    }else
    {
        print(nodo->next);
    }

}

std::ostream &operator  <<(std::ostream &out, const LinkedList &p){
    if(nodo->next == nullptr){
        std::out<<nodo->elem;
        return ;
    }else
    {
        print(nodo->next);
    }

}

LinkedList::~LinkedList()
{
}

#include <iostream>
#include "LinkedList.h"
template <typename I>
class Iterator
{
private:
    Node<I> *iterador;

public:
    Iterator();
    Iterator(Node<I> *);
    Iterator(const Iterator<I> &);

    Iterator(Iterator<I> &&);

    Iterator<I> operator=(Node<I> *);

    Iterator<I> operator=(const Iterator<I> &);

    Iterator<I> operator=(const Iterator<I> &&);

    Iterator<I> operator++(int); //forma de postfijo
    Iterator<I> &operator++();
    Iterator<I> operator+(int);
    Iterator<I> operator+=(int);
    I operator*();
    bool operator!=(Node<I> *);
    ~Iterator();
    friend std::ostream &operator<<(std::ostream &salida1, Iterator<I> &i)
    {
        salida1 << *i << std::endl;
        return salida1;
    }
};

        /***CONTRUCTORES***/
//Constructor por defecto
template <typename I>
Iterator<I>::Iterator()
{ 
    this->iterador = nullptr;
}
//Constructor copia un objeto Node puntero a un objeto iterator
template <typename I>
Iterator<I>::Iterator(Node<I> *o)
{ 
    this->iterador = o;
}
//Constructor Copia el obtero Node* a  L
template <typename I>
Iterator<I>::Iterator(const Iterator<I> &o)
{ 
    this->iterador = o.iterador;
}
//Constructor de movimiento R
template <typename I>
Iterator<I>::Iterator(Iterator<I> &&o)
{
    this->iterador = o.iterador;
}
        /***DESTRUCTORES***/
//Destructor
template <typename I>
Iterator<I>::~Iterator() {}



//Sobrecarga operador de asignacion tipo puntero
template <typename I>
Iterator<I> Iterator<I>::operator=(Node<I> *o)
{ 
    this->iterador = o;
    return *this;
}
//Operador de asignacion por R value
template <typename I>
Iterator<I> Iterator<I>::operator=(const Iterator<I> &o)
{ 
    this->iterador = o.iterador;
    return *this;
}
//Sobrecarga operador de asignación para L value
template <typename I>
Iterator<I> Iterator<I>::operator=(const Iterator<I> &&o)
{ 
    this->iterador = o.iterador;
    return *this;
}
// Sobrecarga de incremento postfijo
template <typename I>
Iterator<I> Iterator<I>::operator++(int)
{ 
    this->iterador = this->iterador->getNext();
    Iterator<I> aux(this->iterador);
    return aux;
}
//Sobrecarga de incremento postfijo por defecto
template <typename I>
Iterator<I> &Iterator<I>::operator++()
{ 
    this->iterador = this->iterador->getNext();
    Iterator<I> aux(this->iterador);
    return *this;
}

//Sobrecarga de suma postfijo por defecto
template <typename I>
Iterator<I> Iterator<I>::operator+(int i)
{
    for (int j = 0; j < i; j++)
    {
        this->iterador = this->iterador->getNext();
    }
    Iterator<I> aux(this->iterador);
    return aux;
}

//Sobrecarga de incremento y asignación postfijo
template <typename I>
Iterator<I> Iterator<I>::operator+=(int i)
{
    for (int j = 0; j < i; j++)
    {
        this->iterador = this->iterador->getNext();
    }
    Iterator<I> aux(this->iterador);
    return aux;
}

//Sobrecarga de indirección
template <typename I>
I Iterator<I>::operator*()
{
    return this->iterador->getContent();
}
//Sobrecarga de comparacón
template <typename I>
bool Iterator<I>::operator!=(Node<I> *o)
{
    return (this->iterador != o);
}


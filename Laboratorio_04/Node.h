#ifndef __NODE_H__
#define __NODE_H__

class Node
{
private:
    int elem;
    Node *next;
public:
    Node(int);
    ~Node();
    getElement();
    
};

Node::Node(int numero)
{
    this->elem=numero;
}

Node::~Node()
{
}

Node::getElement(){
    return this->elem;
}
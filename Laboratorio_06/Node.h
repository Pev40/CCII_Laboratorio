template<typename T>
class Node{
    private:
        Node <T>*next;
        T content;
    public:
        Node(T);
        Node();
        Node (const Node<T> &);
        Node(Node<T> &&);
        Node<T>& operator=(const Node<T> &);
        Node<T>& operator=(Node<T> &&);
        Node <T>* getNext() const;
        void setNext(Node *);
        T getContent() const;
        void setContent(T);
        friend std::ostream& operator <<(std::ostream &salida1,const Node<T>& C){
            salida1<<C.getContent();
            return salida1;
        }            
};


/***CONSTRUCTORES***/
template<typename T>
Node<T>::Node(T _content){ 
    this->content=_content;
    this->next=nullptr;
}
//Constructor por defecto
template<typename T>
Node<T>::Node(){ 
    this->content=0;
    this->next=nullptr;
}
//Constructor copia
template<typename T>
Node<T>::Node (const Node<T> &obj){
    this->next=obj.next;
    this->content=obj.content;
}
//Constructor de movimiento
template<typename T>
Node<T>::Node(Node<T> &&obj){
    this->next=obj.next;
    this->content=obj.content; 
}

/***SOBRECARGAS***/
//Sobrecarga del operador para asignacion de copia
template<typename T>
Node<T>&Node<T>:: operator=(const Node<T> &obj){
    this->next=obj.next;
    this->content=obj.content; 
}
//Sobrecarga del operador para asignacion de movimiento
template<typename T>
Node<T>& Node<T>::operator=(Node<T> &&obj){
    this->next=obj.next;
    this->content=obj.content; 
}

/***GETTERS AND SETTERS***/
template<typename T>
Node <T>* Node<T>::getNext() const{
    return this->next;
}
        
template<typename T>
void Node<T>::setNext(Node *next){
    this->next=next;
}
        
template<typename T>
T Node<T>:: getContent() const{
    return this->content;
}
        
template<typename T>
void Node<T>::setContent(T content){
    this->content=content;
}
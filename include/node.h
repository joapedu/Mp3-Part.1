#include <iostream>

#ifndef NODE_H
#define NODE_H

template<typename T> //criando um valor template chamado de T
class Node{ //Escopo da classe Node 
  public: //todos os valores da classe sao publicos
    T data; //sendo eles um valor template qualquer chamado de data
    Node* next; //e um ponteiro para o proximo nó da lista

    Node(T data) { //o construtor e definido para receber dois parametros
      this->data = data;  //data, que é usado para inicializar o membro data do nó
      this->next = nullptr; //e O ponteiro next é definido como nullptr, indicando que não há próximo nó conectado a este
    };

    T &getData() {
      return data;
    };

    Node *getNext() {
      return next;
    };

    void setData(T data);
    void setNext(Node<T> *next);
};

template<typename T>
void Node<T>::setData(T data){
  this->data = data;
}

template <typename T>
void Node<T>::setNext(Node<T> *next){
    this->next = next;
}

#endif // !NODE_H


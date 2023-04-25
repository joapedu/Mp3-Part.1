#include <iostream>
#include "node.h"

#ifndef LISTA_H
#define LISTA_H

template<typename T>
class Lista {
  private:
    Node<T> *head;

  public:
    Lista();
    ~Lista();

    void adicionar(T data);
    void remover(int index);
    void buscar(int index);
    void printLista();

};


#endif // !LISTA_H


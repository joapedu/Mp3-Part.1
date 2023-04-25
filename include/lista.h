#include <iostream>
#include "musica.h"
#include "node.h"

#ifndef LISTA_H
#define LISTA_H

class Lista {
  private:
    Node* head;

  public:
    Lista();
    ~Lista();

    void adicionar(int value);
    void remover(int index);
    void printLista();

};


#endif // !LISTA_H


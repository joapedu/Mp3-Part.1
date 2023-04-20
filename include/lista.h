#include <iostream>
#include "musica.h"

#ifndef LISTA_H
#define LISTA_H

struct Node {
  Musica data;
  Node* next;

  Node(Musica);
};

class Lista {
  private:
    Node* head;
    int size;

  public:
    Lista();
    ~Lista();

    void addLista(Musica);
    void removeLista(Musica);
    void buscarMusica();
    void printLista();

};


#endif // !LISTA_H


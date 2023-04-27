#include <iostream>
#include "node.h"

#ifndef LISTA_H
#define LISTA_H

template<typename T>
class Lista {
  private:
    Node<T> *head;

  public:
    Lista() : head(nullptr){};
    ~Lista(){};

    void adicionar(T data){
      Node<T> *newNode = new Node<T>(data);  
      if (head == nullptr) {  
        head = newNode;  
        return;  
  	  }  
      Node<T> *temp = head;  
      while (temp->next != nullptr) {  
      temp = temp->next;  
  	  }  
  	  temp->next = newNode;  
    
    };

    void remover(int index){
      if(index < 1) {
        std::cout << "\nEscolha um valor maior ou igual a 1";
      } else if (index == 1 && head != NULL) { 
        Node<T> *nodeToDelete = head;
        head = head->next;
        free(nodeToDelete);
      } else {
        Node<T> *temp = head;
        for(int i = 1; i < index-1; i++) {
          if(temp != NULL) {
            temp = temp->next;
          }
        }
        if(temp != NULL && temp->next != NULL) {
            Node<T> *nodeToDelete = temp->next;
            temp->next = temp->next->next;
            free(nodeToDelete); 
        } else {
          std::cout<<"\nEste Index já se encontra nulo";
        }       
      }
    };

    void buscar(int index);

    void printLista(){
      int index;
      Node<T> *temp = head;  
      while (temp != nullptr) {
        index++;
        std::cout << "\n" << std::endl;
        std::cout << index << " " << temp->data << "" << std::endl;  
        temp = temp->next;  
      }  
      std::cout << std::endl;  
    };

};


#endif // !LISTA_H


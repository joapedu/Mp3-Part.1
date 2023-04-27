#include <iostream>
#include "../include/lista.h"

//template<typename T>
//Lista<T>::Lista(){
//  this->head = nullptr;
//};

//template<typename T>
//Lista<T>::~Lista(){};

//template<typename T>
//void Lista<T>::adicionar(T data){

//  Node<T> *newNode = new Node<T>(data);  
//  if (head == nullptr) {  
//    head = newNode;  
//    return;  
//  }  
//  Node<T> *temp = head;  
//  while (temp->next != nullptr) {  
//    temp = temp->next;  
//  }  
//  temp->next = newNode;  

//};

template<typename T>
void Lista<T>::remover(int index){

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

template<typename T>
void Lista<T>::buscar(int index){

};

//template<typename T>
//void Lista<T>::printLista(){

//  Node<T> *temp = head;  
//  while (temp != nullptr) {  
//    std::cout << temp->data << " ";  
//    temp = temp->next;  
//  }  
//  std::cout << std::endl;    

//};

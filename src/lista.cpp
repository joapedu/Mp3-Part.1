#include <iostream>
#include "../include/lista.h"

template<typename T>
Lista<T>::Lista(){
  this->head = nullptr;
};

template<typename T>
Lista<T>::~Lista(){};

template<typename T>
void Lista<T>::adicionar(T data){

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

template<typename T>
void Lista<T>::remover(int index){

};

template<typename T>
void Lista<T>::buscar(int index){

};

template<typename T>
void Lista<T>::printLista(){
  Node<T> *temp = head;  
  while (temp != nullptr) {  
    std::cout << temp->data << " ";  
    temp = temp->next;  
  }  
  std::cout << std::endl;    
};

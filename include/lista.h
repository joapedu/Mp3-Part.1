#include <iostream>
#include "node.h"
#include "musica.h"

#ifndef LISTA_H
#define LISTA_H

template<typename T>
class Lista { //criando a Classe da lista encadeada chamada de Lista usando um template chamado de T
  private:
    Node<T> *head; //ponteiro head para Node, representando o primeiro nó da lista encadeada
    Node<T> *tail;

  public:
    Lista() : head(nullptr){}; //construtor da classe
    Lista(const Lista<T> &other);
    ~Lista(){}; //destrutor da classe
    
    Node<T> *getHead(){
      return head;
    };

    Node<T> *getTail(){
      return tail;
    };

    size_t getSize() const {
      size_t size = 0;
      Node<T> *curr = head;

      while(curr != nullptr){
        curr = curr->getNext();
        size++;
      }

      return size;
    };

    void adicionar(T data){ //A funcao adicionar é responsável por adicionar um novo elemento a lista encadeada
      Node<T> *newNode = new Node<T>(data);  
      if (head == nullptr) {  //Se a lista estiver vazia (o ponteiro head é nulo), o novo nó se torna o primeiro nó
        head = newNode;  
        return;  
  	  }  
      Node<T> *temp = head;  //Ele cria um novo nó com os dados passados como parâmetro e o insere no final da lista 
      while (temp->next != nullptr) {  
      temp = temp->next;  
  	  }  
  	  temp->next = newNode;	//Caso contrário, ele percorre a lista até encontrar o último nó e insere o novo nó lá
    
    };

    void adicionarOutro(const Lista<T> &other){
      Node<T> *currNode = other.getHead();
    
      while(currNode != nullptr){
        this->add(currNode->getData());
        currNode = currNode->getNext();
      }
    
    };

    void remover(int index){  //O método remover é responsável por remover um elemento da lista com base no index fornecido pelo usuario 
      if(index < 1) {
        std::cout << "\nEscolha um valor maior ou igual a 1" << std::endl;
      } else if (index == 1 && head != NULL) { 
        Node<T> *nodeToDelete = head;
        head = head->next;
        free(nodeToDelete); //Se o índice for menor que 1, uma mensagem de erro é exibida. Se o índice for 1 e a lista não estiver vazia, o primeiro nó é removido 
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
            free(nodeToDelete); //Caso contrário, ele percorre a lista até o nó anterior ao índice fornecido e remove o próximo nó
        } else {
          std::cout<<"\nEste Index já se encontra nulo" << std::endl; //Se o Index passado representar um valor nulo, uma mensagem e exibida
        }       
      } 
    };

    int removerData(T data){
      Node<T> *curr = head;
      Node<T> *prev = nullptr;

      while(curr != nullptr){
        if(curr->getData() == data){
          if(prev != nullptr){
            prev->setNext(curr->getNext());
              if(curr == tail){
                tail = prev;
              }
          }
          else{
            head = curr->getNext();
            if(head == nullptr){
              tail = nullptr;
            }
          }

          delete curr;
          return 1;
        }

        prev = curr;
        curr = curr->getNext();
      }

      return 0;
    };

    void limpar(){
      Node<T> *prev = nullptr;
      Node<T> *curr = head;

      while(curr != nullptr){
        prev = curr;
        curr = curr->getNext();
        delete prev;
      }
      head = nullptr;
      tail = nullptr;
    };

    T dataIndex(int index){ //A função dataIndex retorna o valor do elemento da lista que está no índice fornecido. Ela verifica se o índice é válido (maior ou igual a 1) e, em seguida, percorre a lista até encontrar o nó correspondente ao índice desejado. Ao encontrar o nó, o valor armazenado em data desse nó é retornado.

      if (index < 1){ //Verifica se o index passado é menor que 1
        std::cout << "\nEscolha um valor maior ou igual a 1" << std::endl; //Caso seja, ele retorna um erro
      }

      Node<T> *temp = head;
      int currentIndex = 1;
      while (temp != nullptr) {
          if (currentIndex == index) {
              return temp->data;
          } //Verifica se o indice atual é igual ao passado pelo usuario, caso seja, retorna os dados daquele nó
          temp = temp->next;
          currentIndex++; //Vai adicionando valores ao currentIndex ate encontrar o um numero que seja igual ao index passado pelo usuario
       }
    };

    T* dataT(T data){
      Node<T> *curr = head;

      while(curr != nullptr){
        if(curr->getData() == data){
            return &(curr->getData());
        }
        curr = curr->getNext();
      }

      return nullptr; 
    };

    void printLista(){ //A função printLista imprime os elementos da lista percorrendo a lista a partir do primeiro nó (head) até o último nó
      int index; //Valor do index e utilizado para printar para o usuario
      Node<T> *temp = head;  
      while (temp != nullptr) { //Verifica se tem elementos na lista
        index++; //adiciona +1 para cada elemento na lista para index
        std::cout << "\n" << std::endl;
        std::cout << index << " " << temp->data << "" << std::endl; //Imprimindo os valores de index e o valor da lista  
        temp = temp->next;  
      }  
      std::cout << std::endl;  
    };

    void printAux(Node<T> *curr){
      if(curr != nullptr){
          std::cout << curr->getData() << std::endl;
          printAux(curr->getNext());
      }
    };

    void printRec(){
      printAux(head);
    };

    Lista<T> operator+(Lista<T> &other);

};

template <typename T>
Lista<T> Lista<T>::operator+(Lista<T> &other){
    Lista<T> novaLista;
    novaLista.add(*this);
    novaLista.add(other);

    return novaLista;
}


extern Lista<Musica> lista; //tornando o objeto lista global para ser utilizado nos arquivos de maneira mais prática

#endif // !LISTA_H


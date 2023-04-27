#include <iostream>

#ifndef NODE_H
#define NODE_H

template<typename T>
class Node{
  public:
    T data;
    Node* next;

    Node(T data) {
      this->data = data;
      this->next = nullptr;
    }

};

#endif // !NODE_H


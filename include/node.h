#include <iostream>

#ifndef NODE_H
#define NODE_H

class Node{
  public:
    int data;
    Node* next;

    Node(int value) {
      data = value;
      next = nullptr;
    }

};

#endif // !NODE_H


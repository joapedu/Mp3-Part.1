template<typename T>
class Lista {
private:
  Node<T> *head;

public:
  Lista() : head(nullptr) {}

  // Construtor cópia
  Lista(const Lista<T>& other) {
    if (other.head == nullptr) {
      head = nullptr;
    } else {
      head = new Node<T>(other.head->data);
      Node<T>* current = head;
      Node<T>* otherCurrent = other.head->next;
      while (otherCurrent != nullptr) {
        current->next = new Node<T>(otherCurrent->data);
        current = current->next;
        otherCurrent = otherCurrent->next;
      }
    }
  }

  ~Lista() {
    while (head != nullptr) {
      Node<T>* temp = head;
      head = head->next;
      delete temp;
    }
  }

  void adicionar(T data) {
    Node<T>* newNode = new Node<T>(data);
    if (head == nullptr) {
      head = newNode;
    } else {
      Node<T>* temp = head;
      while (temp->next != nullptr) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
  }

  void adicionarLista(Lista<T>& other) {
    Node<T>* otherCurrent = other.head;
    while (otherCurrent != nullptr) {
      adicionar(otherCurrent->data);
      otherCurrent = otherCurrent->next;
    }
  }

  void remover(int index) {
    if (index < 1) {
      std::cout << "\nEscolha um valor maior ou igual a 1" << std::endl;
      return;
    }

    if (index == 1 && head != nullptr) {
      Node<T>* nodeToDelete = head;
      head = head->next;
      delete nodeToDelete;
      return;
    }

    Node<T>* temp = head;
    for (int i = 1; i < index - 1; i++) {
      if (temp == nullptr) {
        std::cout << "\nÍndice fora dos limites" << std::endl;
        return;
      }
      temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
      std::cout << "\nÍndice fora dos limites" << std::endl;
      return;
    }

    Node<T>* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
  }

  void removerLista(Lista<T>& other) {
    Node<T>* otherCurrent = other.head;
    while (otherCurrent != nullptr) {
      Node<T>* temp = head;
      Node<T>* prev = nullptr;
      while (temp != nullptr) {
        if (temp->data == otherCurrent->data) {
          if (prev == nullptr) {
            head = temp->next;
          } else {
            prev->next = temp->next;
          }
          Node<T>* nodeToDelete = temp;
          temp = temp->next;
          delete nodeToDelete;
        } else {
          prev = temp;
          temp = temp->next;
        }
      }
      otherCurrent = otherCurrent->next;
    }
  }

  T dataIndex(int index) {
    if (index < 1) {
      std::cout << "\nEscolha um valor maior ou igual a 1" << std::endl;
      return T(); // Retornar um valor padrão se o índice for inválido
    }

    Node<T>* temp = head;
    int currentIndex = 1;
    while (temp != nullptr) {
      if (currentIndex == index) {
        return temp->data;
      }
      temp = temp->next;
      currentIndex++;
    }

    std::cout << "\nÍndice fora dos limites" << std::endl;
    return T(); // Retornar um valor padrão se o índice for inválido
  }

  void printLista() {
    int index = 0;
    Node<T>* temp = head;
    while (temp != nullptr) {
      index++;
      std::cout << "\n" << index << " " << temp->data << "" << std::endl;
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};
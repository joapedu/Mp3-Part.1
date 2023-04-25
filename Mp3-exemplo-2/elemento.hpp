// Classe Elemento para Lista Ligada
#include <string>

#ifndef ELEMENTO_HPP
#define ELEMENTO_HPP

class Elemento {
    private:
        Musica* musica;
        Elemento* proximo;
    public:
        Elemento(Musica* musica) {
            this->musica = musica;
            this->proximo = NULL;
        }
        ~Elemento() {}
};

#endif // !
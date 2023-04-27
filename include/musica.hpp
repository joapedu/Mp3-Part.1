// Classe Música

#include <iostream>
#include <string>

#ifndef MUSICA_HPP
#define MUSICA_HPP

using namespace std;

class Musica {
    private:
        string titulo;
        string artista;
    public:
        Musica(string titulo, string artista) {
            this->titulo = titulo;
            this->artista = artista;
        }
        ~Musica() {}
};

#endif // !

// Classe Música

#include <iostream>
#include <string>

#ifndef MUSICA_HPP
#define MUSICA_HPP

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

// Classe Playlist


#include <iostream>
#include <string>

#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

class Playlist {
    private:
        string nome;
        ListaLigada* musicas;
        Elemento* atual;
    public:
        Playlist(string nome) {
            this->nome = nome;
            this->musicas = new ListaLigada();
            this->atual = NULL;
        }
        ~Playlist() {}
        void adicionar(Musica* musica) {
            this->musicas->inserir(musica);
        }
        void remover(Musica* musica) {
            this->musicas->remover(musica);
        }
        Musica* proximaMusica() {
            if (this->atual == NULL) {
                this->atual = this->musicas->primeiro;
            } else {
                this->atual = this->atual->proximo;
            }
            if (this->atual != NULL) {
                return this->atual->musica;
            }
            return NULL;
        }
        void imprimirMusicas(Elemento* atual) {
            if (atual != NULL) {
                imprimirMusicas(atual->proximo);
                cout << atual->musica->titulo << " - " << atual->musica->artista << endl;
            }
        }
        void imprimirTodasMusicas() {
            imprimirMusicas(this->musicas->primeiro);
        }
};
#endif
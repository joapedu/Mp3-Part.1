// Classe Lista Ligada

#include <iostream>
#include <string>

#ifndef LISTALIGADA_HPP
#define LISTALIGADA_HPP

class ListaLigada {
    private:
        Elemento* primeiro;
    public:
        ListaLigada() {
            this->primeiro = NULL;
        }
        ~ListaLigada() {}
        void inserir(Musica* musica) {
            Elemento* novo = new Elemento(musica);
            novo->proximo = this->primeiro;
            this->primeiro = novo;
        }
        void remover(Musica* musica) {
            Elemento* anterior = NULL;
            Elemento* atual = this->primeiro;
            while (atual != NULL && atual->musica != musica) {
                anterior = atual;
                atual = atual->proximo;
            }
            if (atual != NULL) {
                if (anterior != NULL) {
                    anterior->proximo = atual->proximo;
                } else {
                    this->primeiro = atual->proximo;
                }
                delete atual;
            }
        }
        Musica* buscar(string titulo, string artista) {
            Elemento* atual = this->primeiro;
            while (atual != NULL) {
                if (atual->musica->titulo == titulo && atual->musica->artista == artista) {
                    return atual->musica;
                }
                atual = atual->proximo;
            }
            return NULL;
        }
        Musica* acessar(int posicao) {
            Elemento* atual = this->primeiro;
            int i = 0;
            while (atual != NULL && i < posicao) {
                atual = atual->proximo;
                i++;
            }
            if (atual != NULL) {
                return atual->musica;
            }
            return NULL;
        }
};

#endif // !
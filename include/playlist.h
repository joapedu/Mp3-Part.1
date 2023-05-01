#include <string>
#include <vector>
#include "musica.h"
#include "lista.h"

#ifndef PLAYLIST_H
#define PLAYLIST_H

using namespace std;

class Playlist{ //Criando classe Playlist
  private:  //passando as variaveis privadas: nome e um vetor de musicas
    string nome;
    vector<Musica> musica;

  public:
    Playlist(); //construtor da classe
    ~Playlist();  //destrutor da classe
    Playlist(string nome, vector<Musica> musica); //construtor com os parametros de nome e um vetor de musicas

    void setNome(string nome); //setando o nome do playlist
    void setMusica(Musica *m);  //setando as musicas que serao passadas para o vetor

    string getNome() const; //pegando o nome da playlist
    Lista<Musica> getMusica();  //pegando as musicas presentes no vetor de musica

    void adicionarMusica(Musica m); //funcao para adicionar musicas ao vetor
    void removerMusica(int index); //funcao para remover musicas do vetor
    void editarPlaylist(int index, Musica newM); //funcao nao utilizada, mas sua ideia era para selecionar uma certa playlist e remover ou adicioanar musicas
    void printarPlaylist() const; //funcao para printar os elementos da classe Playlist

};

ostream& operator<<(ostream& os, const Playlist& playlist); //sobrecarga de operador na classe Playlist

#endif

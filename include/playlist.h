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
    Lista<Musica> musica;

  public:
    Playlist(); //construtor da classe
    ~Playlist();  //destrutor da classe
    Playlist(string nome); //construtor somente com o valor do nome
    Playlist(const Playlist &other); //construtor copia

    string getNome() const; //pegando o nome da playlist
    Lista<Musica> &getMusicas();  //pegando as musicas presentes no vetor de musica

    void adicionarMusica(Musica m); //funcao para adicionar musicas ao vetor
    void removerMusica(Musica m); //funcao para remover musicas do vetor
    Musica *procurarMusica(Musica m); //funcao para procurar determinada musica na playlist
    void printarPlaylist(); //funcao para printar os elementos da classe Playlist

    bool operator==(Playlist &b); //sobrecarga de operador que retorna um booleano
    Playlist operator+(Musica &m); //sobrecarga no operador '+'
    Playlist operator-(Musica &m); //sobrecarga no operador '-'
    Playlist& operator>>(Musica &m); //sobrecarga no operador '>>'
    Playlist& operator<<(Musica &m); //sobrecarga no operador '<<'

};

ostream& operator<<(ostream& os, const Playlist& playlist); //sobrecarga de operador na classe Playlist

#endif

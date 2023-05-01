#include <string>
#include <vector>
#include "musica.h"
#include "lista.h"

#ifndef PLAYLIST_H
#define PLAYLIST_H

using namespace std;

class Playlist{
  private:
    string nome;
    vector<Musica> musica;

  public:
    Playlist();
    ~Playlist();
    Playlist(string nome, vector<Musica> musica);

    void setNome(string nome);
    void setMusica(Musica *m);

    string getNome() const;
    Lista<Musica> getMusica();

    void adicionarMusica(Musica m);
    void removerMusica(int index);
    void editarPlaylist(int index, Musica newM);
    void printarPlaylist() const;

    Node<Musica> *buscarMusica(Musica *m);

};

ostream& operator<<(ostream& os, const Playlist& playlist);

#endif

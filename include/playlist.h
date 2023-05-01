#include <string>
#include <vector>
#include "musica.h"

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

    string getNome() const;

    void adicionarMusica(Musica m);
    void removerMusica(int index);
    void printarPlaylist();

};

ostream& operator<<(ostream& os, const Playlist& playlist);

#endif

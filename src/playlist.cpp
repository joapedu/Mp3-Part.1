#include <iostream>
#include <vector>
#include "../include/musica.h"
#include "../include/playlist.h"

using namespace std;

Playlist::Playlist(){};

Playlist::~Playlist(){};

Playlist::Playlist(string nome, vector<Musica> musica){
  this->nome = nome;
  this->musica = musica;
};

void Playlist::setNome(string nome){
  this->nome = nome;
};

string Playlist::getNome() const {
  return this->nome;
}

void Playlist::adicionarMusica(Musica m){
  musica.push_back(m);
};

void Playlist::removerMusica(int index){
  musica.erase(musica.begin() + index);
};
 
void Playlist::printarPlaylist(){

  cout << "Músicas: " << endl;

  for(int i = 0; i < musica.size(); i++) {
    cout << i << " - " << musica[i].getTitulo() << endl;
  }

};

ostream& operator<<(ostream& os, const Playlist& playlist){
  os << playlist.getNome() << endl;

  return os;
}

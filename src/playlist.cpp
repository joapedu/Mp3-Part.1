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

void Playlist::editarPlaylist(int index, Musica newM){
  if (index >= 0 && index < musica.size()) {
    musica[index] = newM;
    cout << "Música editada com sucesso!" << endl;
  } else {
     cout << "Índice inválido!" << endl;
  }
};

void Playlist::removerMusica(int index){
  if (index >= 0 && index < musica.size()) {
    musica.erase(musica.begin() + index);
    cout << "Música removida com sucesso!" << endl;
  } else {
    cout << "Índice inválido!" << endl;
  }
};
 
void Playlist::printarPlaylist() const{
  int index = 0;

  cout << "Nome da Playlist: " << nome << endl;

  cout << "Musica: " << endl;

  for (const auto& musicas : musica ){
    index++;
    cout << index << " " << musicas << endl;
  }
  
};

ostream& operator<<(ostream& os, const Playlist& playlist){
  os << "Nome da Playlist: " << playlist.getNome() << endl;

  return os;
}

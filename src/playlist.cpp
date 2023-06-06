#include <iostream>
#include <vector>
#include "../include/musica.h"
#include "../include/playlist.h"


using namespace std;

Playlist::Playlist(){
  this->nome = "";
}; //construtor da classe Playlist

Playlist::~Playlist(){
  getMusicas().limpar();
};  //destrutor da classe Playlist

Playlist::Playlist(string nome){ //construtor somente com o nome
  this->nome = nome;
};

Playlist::Playlist(const Playlist &other){ //construtor copia
  this->nome = other.nome;
  this->musica = other.musica;
};

string Playlist::getNome() const { //retorna o nome da playlist
  return this->nome;
};

Lista<Musica> &Playlist::getMusicas(){ //retorna as musicas da playlsit
  return musica;
};

void Playlist::adicionarMusica(Musica m){ //adiciona objetos da classe Musica no vector musica
  getMusicas().adicionar(m);
};

void Playlist::removerMusica(Musica m){ //remove a musica da playlist
  getMusicas().removerData(m);
};

Musica *Playlist::procurarMusica(Musica m){ //procura as musicas na playlist
  return getMusicas().dataT(m);
};
 
void Playlist::printarPlaylist(){ //printa os elementos da playlist
  getMusicas().printRec(); 
};

bool Playlist::operator==(Playlist &b){
    return this->getNome() == b.getNome();
}

ostream& operator<<(ostream& os, const Playlist& playlist){ //sobrecarga de operador para a classe Playlist
  os << "Nome da Playlist: " << playlist.getNome() << endl; 

  return os;
}

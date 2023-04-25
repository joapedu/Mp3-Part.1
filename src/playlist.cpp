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

void Musica::setArtista(string artista){
  this->artista = artista;
};

string Musica::getTitulo(){
  return titulo;
};

string Musica::getArtista(){
  return artista;
};

void Musica::imprimirDados(){
  cout << "Titulo: " << titulo << endl;
  cout << "Artista: " << artista << endl;
}


#include <iostream>
#include "../include/musica.h"

using namespace std;

Musica::Musica(){};

Musica::~Musica(){};

Musica::Musica(string titulo, string artista){
  this->titulo = titulo;
  this->artista = artista;
};

void Musica::setTitulo(string titulo){
  this->titulo = titulo;
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


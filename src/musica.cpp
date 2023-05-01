#include <iostream>
#include "../include/musica.h"

Musica::Musica(){};

Musica::~Musica(){};

Musica::Musica(std::string titulo, std::string artista){
  this->titulo = titulo;
  this->artista = artista;
};

void Musica::setTitulo(std::string titulo){
  this->titulo = titulo;
};

void Musica::setArtista(std::string artista){
  this->artista = artista;
};

std::string Musica::getTitulo() const {
  return titulo;
};

std::string Musica::getArtista() const {
  return artista;
};

void Musica::imprimirDados(){
  std::cout << "Titulo: " << titulo << std::endl;
  std::cout << "Artista: " << artista << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Musica& musica){
  os << musica.getTitulo() << " - " << musica.getArtista() << std::endl;

  return os;
}

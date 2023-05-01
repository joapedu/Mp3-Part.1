#include <iostream>
#include "../include/musica.h"

Musica::Musica(){}; //construtor da classe Musica

Musica::~Musica(){}; //destrutor da classe Musica

Musica::Musica(std::string titulo, std::string artista){  //construtor que recebe os valores de titulo e artista
  this->titulo = titulo;
  this->artista = artista;
};

void Musica::setTitulo(std::string titulo){ //setando o titulo da musica ao ser chamado
  this->titulo = titulo;
};

void Musica::setArtista(std::string artista){ //setando o artista da musica ao ser chamado
  this->artista = artista;
};

std::string Musica::getTitulo() const { //ao ser chamado, retorna o titulo da musica
  return titulo;
};

std::string Musica::getArtista() const {  //ao ser chamado, retorna o artista da musica
  return artista;
};

void Musica::imprimirDados(){ //imprime os dados da musica caso seja chamado no codigo
  std::cout << "Titulo: " << titulo << std::endl;
  std::cout << "Artista: " << artista << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Musica& musica){ //sobrecarga de operador na classe Musica
  os << musica.getTitulo() << " - " << musica.getArtista() << std::endl;  //separando os dados do seguinte exemplo: "One - Metallica"

  return os;
}

#include <string>

#ifndef MUSICA_H  
#define MUSICA_H

class Musica{ //criando a classe Musica
  private: //com os seguintes valores privados: titulo e artista
    std::string titulo;
    std::string artista;

  public: //ja as funcoes publicas temos:
    Musica(); //construtor da classe
    ~Musica(); //destrutor da classe
    Musica(std::string titulo, std::string artista); //construtor com os parametros privados

    void setTitulo(std::string titulo); //funcao para setar o titulo
    void setArtista(std::string artista); //funcao para setar o artista

    std::string getTitulo() const;  //pegando o titulo da musica
    std::string getArtista() const; //pegando o artista da musica
    void imprimirDados(); //imprimindo os dados da musica


};

std::ostream& operator<<(std::ostream& os, const Musica& musica); //sobrecarga de operador na classe Musica

#endif // !







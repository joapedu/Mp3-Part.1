#include <string>

#ifndef MUSICA_H
#define MUSICA_H

class Musica{
  private:
    std::string titulo;
    std::string artista;

  public:
    Musica();
    ~Musica();
    Musica(std::string titulo, std::string artista);

    void setTitulo(std::string titulo);
    void setArtista(std::string artista);

    std::string getTitulo() const;
    std::string getArtista() const;
    void imprimirDados();


};

std::ostream& operator<<(std::ostream& os, const Musica& musica);

#endif // !







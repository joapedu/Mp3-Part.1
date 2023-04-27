#include <string>

#ifndef MUSICA_H
#define MUSICA_H

using namespace std;

class Musica{
  private:
    string titulo;
    string artista;

  public:
    Musica();
    ~Musica();
    Musica(string titulo, string artista);

    void setTitulo(string titulo);
    void setArtista(string artista);

    string getTitulo() const;
    string getArtista() const;
    void imprimirDados();


};

ostream& operator<<(ostream& os, const Musica& musica);
    
#endif // !







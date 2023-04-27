#include <iostream>
#include "../include/musica.h"
#include "../include/playlist.h"
#include "../include/lista.h"

using namespace std;

void adicionarMusica(){
  Musica m;
  string titulo, artista;

  
  cout << "Digite um Titulo: ";
  cin >> titulo;

  cout << "Digite o artista: ";
  cin >> artista;

  m.setTitulo(titulo);
  m.setArtista(artista);

  m.imprimirDados();

  return;

};

void listarMusicas(){
  return;
};

void removerMusica(){
  return;
};


void musicaSelection(){

  int escolha;
  string titulo, artista;

  cout << "1 - Adicionar Música " << endl;
  cout << "2 - Listar todas as Músicas" << endl;
  cout << "3 - Deletar Música " << endl;
  cout << "0 - Retornar " << endl;

  cin >> escolha;

   switch (escolha) {
    case 1:
      adicionarMusica();

    case 2:
      listarMusicas();

    case 3:
      removerMusica();

    case 0:
      return ;
  }

}

void playlistSelection(){

}

int main(){

  int escolha;

  cout << "Escolha uma das opções: " << endl;
  cout << "1 - Área da(s) Musica(s) " << endl;
  cout << "2 - Área da(s) Playlist(s) " << endl;
  cout << "0 - Encerrar Programa " << endl;
  
  cin >> escolha;

  switch (escolha) {
    case 1:
      musicaSelection();

    case 2:
      playlistSelection();

    case 0:
      cout << "Finalizando o programa..." << endl;
      return 0;

    default:
      cout << "Opção Inválida" << endl;
  }

  return main();
}

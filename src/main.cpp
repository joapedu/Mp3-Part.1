#include <iostream>
#include "../include/musica.h"

using namespace std;

void adicionarMusica(){
  string titulo, artista;


}

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
    case 2:
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

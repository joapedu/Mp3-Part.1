#include <iostream>
#include "menu_musica.cpp"
#include "menu_playlist.cpp"

using namespace std;

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
      break;

    case 2:
      playlistSelection();
      break;

    case 0:
      cout << "Finalizando o programa..." << endl;
      return 0;

    default:
      cout << "Opção Inválida" << endl;
      break;
  }

  return main();
}

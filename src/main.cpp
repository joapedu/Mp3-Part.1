#include <iostream>
#include "menu_musica.cpp"
#include "menu_playlist.cpp"

using namespace std;

int main(){

  int escolha; 

  cout << "Escolha uma das opções: " << endl;
  cout << "1 - Área da(s) Musica(s) " << endl;
  cout << "2 - Área da(s) Playlist(s) " << endl;
  cout << "0 - Encerrar Programa " << endl; //printa para o usuario as opções 
  
  cin >> escolha; //pegando a escolha do usuario

  switch (escolha) { //switch-case para chamar ou a função da musica, ou da playlist ou sair do programa
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

  return main(); //recursão
}

#include <iostream>
#include "../include/playlist.h"
#include "../include/lista.h"

using namespace std;

Lista<Playlist> listaa;

void listarPlaylist(){

};

void adicionarPlaylist(){
  Playlist playlist;
  string nome;
  int index;
 
  cout << "Digite o nome da Playlist: " << endl;

  cin >> nome;

  listaa.printLista();

  cout << "Selecione a música pelo seu indice: " << endl;

  cin >> index;
  

};

void buscarPlaylist(){

};

void removerPlaylist(){

};

void playlistSelection(){
  
  int escolha;

  cout << "1 - Criar Playlist " << endl;
  cout << "2 - Listar todas as Playlists" << endl;
  cout << "3 - Buscar Playlist " << endl;
  cout << "4 - Deletar Playlist" << endl;
  cout << "0 - Retornar " << endl;

  cin >> escolha;

   switch (escolha) {
    case 1:
      adicionarPlaylist();
      break;

    case 2:
      listarPlaylist();
      break;

    case 3:
      buscarPlaylist();
      break;

    case 4:
      removerPlaylist();
      break;

    case 0:
      return ;

    default:
      cout << "Escolha Inválida" << endl;
      break;
  }

}


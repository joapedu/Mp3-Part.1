#include <iostream>
#include "../include/playlist.h"
#include "../include/lista.h"
#include "../include/musica.h"

using namespace std;

Playlist playlist;
vector<Playlist> playlists;

void listarPlaylist(){

  playlist.printarPlaylist();

};

void adicionarPlaylist(){

  string nome;
  int index;
 
  cout << "Digite o nome da Playlist: ";
  cin >> nome;

  lista.printLista();

  cout << "Selecione a música pelo seu indice: ";
  cin >> index;

  playlist.setNome(nome);
  playlist.adicionarMusica(lista.dataIndex(index));

};

void editarPlaylist(){
  int index;

  cout << "Selecione uma playlist: ";

};

void removerMus(){

  int indexMusica;

  playlist.printarPlaylist(); 

  cout << "Escolhas algum das musicas p/ remover pelo index: ";
  cin >> indexMusica;
  indexMusica -= 1;

  playlist.removerMusica(indexMusica);

};

void playlistSelection(){
  
  int escolha;

  cout << "1 - Criar Playlist " << endl;
  cout << "2 - Listar todas as Playlists" << endl;
  cout << "3 - Editar Playlist " << endl;
  cout << "4 - Remover Musica" << endl;
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
      editarPlaylist();
      break;

    case 4:
      removerMus();
      break;

    case 0:
      return ;

    default:
      cout << "Escolha Inválida" << endl;
      break;
  }

}


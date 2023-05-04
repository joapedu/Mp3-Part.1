#include <iostream>
#include "../include/playlist.h"
#include "../include/lista.h"
#include "../include/musica.h"

using namespace std;

Playlist playlist;


void listarPlaylist(){ //lista a playlist criada

  playlist.printarPlaylist(); //chamando a funcao da classe Playlist

};

void adicionarPlaylist(){ //funcao para adicionar musicas a playlist

  string nome;
  int index;
 
  cout << "Digite o nome da Playlist: ";
  cin >> nome;

  lista.printLista(); //printando a lista de musicas cadastradas

  cout << "Selecione a música pelo seu indice: ";
  cin >> index;

  playlist.setNome(nome); //setando o nome da playlist
  playlist.adicionarMusica(lista.dataIndex(index)); /* a funcao adicionarMusica precisa de um objeto da classe musica
                                                      para isto ocorrer pelo index, é necessario passar o valor retornado da função
                                                      dataIndex, que por sua vez contém o valor indicado pelo usuario */

};

void editarPlaylist(){ //funcao para atualizar o nome da playlist e adicionar musicas

  adicionarPlaylist();

};

void removerMus(){ //funcao para remover musicas da playlist

  int indexMusica;

  playlist.printarPlaylist(); //e printado as musicas novamente e o usuario devera escolher a que quer remover daquela playlist

  cout << "Escolhas algum das musicas p/ remover pelo index: ";
  cin >> indexMusica;
  indexMusica -= 1; //passando o valor real para a vector, ja que se passar o valor digitado pelo usuario, nao sera o mesmo utilizado no vector

  playlist.removerMusica(indexMusica); //chamando a funcao para remover

};

void playlistSelection(){ //funcao responsavel por gerenciar os menus da area de playlist
  
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


#include <cstdio>
#include <iostream>
#include <string>
#include "../include/playlist.h"
#include "../include/lista.h"
#include "../include/musica.h"

using namespace std;

Playlist playlist;
Lista<Playlist> playlists;

void listarPlaylist(){ //lista a playlist criada

  playlists.printRec();

};

void adicionarPlaylist(){ //funcao para adicionar musicas a playlist

  string playlistNome;
 
  cout << "Digite o nome da Playlist: ";
  getline(cin.ignore(), playlistNome);

  playlists.adicionar(Playlist(playlistNome));

};

void editarPlaylist(){ //funcao para atualizar o nome da playlist e adicionar musicas
  
  string playlistNome, musicaNome;
  int escolha;

  listarPlaylist();
  cout << "Digite o nome da Playlist para editar ou deixe em branco para sair: ";
  getline(cin.ignore(), playlistNome);

  if(playlistNome == ""){
    cout << "Saindo...\n";
    return;
  }

  Playlist* play = playlists.dataT(Playlist(playlistNome));

  if(play == nullptr){
    cout << "Error Playlist\n";
    cout << "Valor Incorreto\n";
    return;
  }

  cout << "1 - Adicionar Musica a Playlist" << endl;
  cout << "2 - Remover Musica da Playlist" << endl;
  cout << "3 - Listar Musicas da Playlist" << endl;
  cout << "0 - Voltar ao Menu" << endl;
  cout << "\n";
  cout << "Escolha uma das opções: ";
  cin >> escolha;

  switch (escolha) {
    case 1: {
      lista.printLista();
      cout << "Digite o Nome da Musica que deseja adicionar: ";
      getline(cin.ignore(), musicaNome);
      
      Musica* referMusica = lista.dataT(Musica(musicaNome));

      if(referMusica == nullptr){
        cout << "Digite uma musica valida" << endl;
      } else {
        play->adicionarMusica(*referMusica);
      }

      break;

    }

    case 2: {
      cout << "Estas sao as musicas presentes nessa playlist: \n";
      play->printarPlaylist();
      cout << "\n";
      cout << "Digite o Nome da Musica que deseja remover da playlist: ";
      getline(cin.ignore(), musicaNome);

      if(play->procurarMusica(Musica(musicaNome)) != nullptr){
        play->removerMusica(Musica(musicaNome));
        cout << "A musica: " << musicaNome << "Foi removida da Playlist" << endl;
      } else {
        cout << "A musica passada nao e valida" << endl;
      }

      break;

    }

    case 3: {
      cout << "Printando as Musicas da Playlist: " << play->getNome() << endl;
      play->printarPlaylist();

      break;
    }

    case 0:
      return;
  
    default:
      cout << "Escolha Inválida" << endl;
      break;
  }


};

void removerMus(){ //funcao para remover musicas da playlist

  int indexMusica;

  playlist.printarPlaylist(); //e printado as musicas novamente e o usuario devera escolher a que quer remover daquela playlist

  cout << "Escolhas algum das musicas p/ remover pelo index: ";
  cin >> indexMusica;
  indexMusica -= 1; //passando o valor real para a vector, ja que se passar o valor digitado pelo usuario, nao sera o mesmo utilizado no vector


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


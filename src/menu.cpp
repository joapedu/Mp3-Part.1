#include <string>
#include <iostream>
#include "../include/musica.h"
#include "../include/playlist.h"
#include "../include/lista.h"

using namespace std;

Lista<Musica> lista;

void listarMusicas(){

  lista.printLista();

};

void removerMusica(){
  listarMusicas();
  int index;

  cout << "Selecione um index das músicas listadas: ";

  cin >> index;

  lista.remover(index);

};

void adicionarMusica(){
  Musica mus;
  string titulo, artista;
 
  cout << "Digite um Titulo: ";
  cin >> titulo;

  cout << "Digite o artista: ";
  cin >> artista;

  mus.setTitulo(titulo);
  mus.setArtista(artista);

  lista.adicionar(mus);

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
      break;

    case 2:
      listarMusicas();
      break;

    case 3:
      removerMusica();
      break;

    case 0:
      return ;

    default:
      cout << "Escolha Inválida" << endl;
      break;
  }

}

void playlistSelection(){

}


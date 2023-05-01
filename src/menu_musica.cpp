#include <iostream>
#include <string>
#include "../include/musica.h"
#include "../include/lista.h"


using namespace std;

Lista<Musica> lista;

void listarMusicas(){ //funcao que chama printa os elementos da lista que contem as musicas

  lista.printLista();

};

void removerMusica(){ //remove as musicas de acordo com o index

  listarMusicas(); //chama a funcao da linha 11

  int index; 

  cout << "Selecione o index das músicas listadas: ";

  cin >> index;

  lista.remover(index); //chamando a funcao da lista encadeada

};

void adicionarMusica(){ // funcao para adicionar musicas a playlist
  Musica mus; //passando o parametro mus
  string titulo, artista;
 
  cout << "Digite um Titulo: ";
  getline(cin.ignore(), titulo);

  cout << "Digite o artista: ";
  getline(cin, artista);

  mus.setTitulo(titulo);
  mus.setArtista(artista);

  lista.adicionar(mus); //chamando a funcao adicionar da lista encadeada

};

void musicaSelection(){ //funcao para gerenciar as opcoes da area da musica
  
  int escolha;

  cout << "1 - Adicionar Música " << endl;
  cout << "2 - Listar todas as Músicas" << endl;
  cout << "3 - Deletar Música" << endl;
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


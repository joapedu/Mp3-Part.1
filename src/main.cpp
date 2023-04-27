#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include "../include/musica.hpp"

using namespace std;

vector<string> titulos;
vector<string> artistas;

//adicionar
void adicionarMusica(){
  int escolha;
  cout << "1 - Adicionar Música " << endl;
  cout << "0 - Retornar" << endl;
  cin >> escolha;

  string artista, titulo;

  switch (escolha) {
    case 1:
      for(int i = 0; i < 1; i++){
        cout << "Digite o nome do artista: ";
        getline(cin, artista);
        artistas.push_back(artista);
  }

      for(int j = 0; j < 1; j++){
        cout << "Digite o nome da música: ";
        getline(cin, titulo);
        titulos.push_back(titulo);
  }
      return adicionarMusica();
    
    break;
    
    case 0:
      return ;
      break;
  }
}

//listar
void listarMusicas() {
  if (titulos.empty()) {
    cout << "Não há músicas cadastradas" << endl;
    return;
  }
  cout << "Lista de Músicas:" << endl;
  for (int i = 0; i < titulos.size(); i++) {
    cout << i + 1 << " - " << artistas[i] << " - " << titulos[i] << endl;
  }
}

//remover
void removerMusica(){
  if (titulos.empty()) {
    cout << "Não há músicas cadastradas" << endl;
    return;
  }
  int i;
  cout << "Digite o índice da música que deseja remover: ";
  cin >> i;
  if (i < 1 || i > titulos.size()) {
    cout << "Índice inválido" << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return;
  }
  artistas.erase(artistas.begin() + i - 1);
  titulos.erase(titulos.begin() + i - 1);
  cout << "Música removida com sucesso" << endl;
}

//Área das músicas:
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
  }

}

//Área das playlists:
void playlistSelection(){

}

int main(){

  int escolha;
  string titulo, artista;

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
  }

  return main();
}

//cd .. && rm -rf build && mkdir build && cd build && cmake .. && make

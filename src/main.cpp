#include <iostream>
#include "menu_musica.cpp"
#include "menu_playlist.cpp"
#include "arquivo.cpp"

using namespace std;

void menuEscolhas(){

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
      return;

    default:
      cout << "Opção Inválida" << endl; 
      break;
  }


  return menuEscolhas(); //recursão
}

int main(int argc, char *argv[]){
  Lista<Playlist> playlists;
  Lista<Musica> lista;

  if(argc != 2){
    cout << "O número de argumentos nao e valido! \n" << "Esperado 1 argumento (nome do arquivo).\n";
    return 1;
  }
    
  ifstream in_file;
  in_file.open(argv[1]);  

  if(!in_file.is_open()){
    cout << "Erro ao abrir arquivo \"" << argv[1] << "\"!\n";
    return 1;
  }
    
  readArchive(in_file, lista, playlists); 

  in_file.close();

  menuEscolhas();

  playlists.limpar();
  lista.limpar();
  return 0;
}

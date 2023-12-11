#include <iostream>
#include "menu_musica.cpp"
#include "menu_playlist.cpp"
#include "arquivo.cpp"

using namespace std;

int obterEscolhaUsuario() {
   int escolha;
   cout << "Escolha uma das opções: " << endl;
   cout << "1 - Área da(s) Musica(s) " << endl;
   cout << "2 - Área da(s) Playlist(s) " << endl;
   cout << "0 - Encerrar Programa " << endl;
   cin >> escolha;
   return escolha;
}

void realizarAcao(int escolha, Lista<Playlist>& playlists, Lista<Musica>& lista) {
   switch (escolha) {
      case 1:
         musicaSelection();
         break;
      case 2:
         playlistSelection();
         break;
      case 0:
         cout << "Finalizando o programa..." << endl;
         break;
      default:
         cout << "Opção Inválida" << endl;
         break;
   }
}

int main(int argc, char *argv[]){
  Lista<Playlist> playlists;
  Lista<Musica> lista;

  if(argc != 2){
    cout << "O número de argumentos nao e valido! \n" << "Esperado 1 argumento (nome do arquivo).\n";
    return 1;
  }

  ifstream in_file;
  in_file.open("./" + string(argv[1]));

  if(!in_file.is_open()){
    cout << "Erro ao abrir arquivo \"" << argv[1] << "\"!\n";
    return 1;
  }

  readArchive(in_file, lista, playlists);

  in_file.close();

  int escolha = obterEscolhaUsuario();
  
  realizarAcao(escolha, playlists, lista);

  playlists.limpar();
  lista.limpar();
  return 0;
}

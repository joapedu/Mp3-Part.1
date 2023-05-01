#include <iostream>
#include <vector>
#include "../include/musica.h"
#include "../include/playlist.h"


using namespace std;

Playlist::Playlist(){}; //construtor da classe Playlist

Playlist::~Playlist(){};  //destrutor da classe Playlist

Playlist::Playlist(string nome, vector<Musica> musica){ //a classe Playlist e criada com o seu respectivo nome e com um vetor de musicas
  this->nome = nome;
  this->musica = musica;
};

void Playlist::setNome(string nome){  //setando nome
  this->nome = nome;
};

string Playlist::getNome() const { //retorna o nome da playlist
  return this->nome;
}

void Playlist::adicionarMusica(Musica m){ //adiciona objetos da classe Musica no vector musica
  musica.push_back(m);  //o push_back adiciona o valor passado no vector
};

void Playlist::editarPlaylist(int index, Musica newM){ //esta funcao seria utilizada para selecionar a playlist e passar uma nova musica para a playlist selecionada
  if (index >= 0 && index < musica.size()) {  //porem a funcao nao e utilizada
    musica[index] = newM;
    cout << "Música editada com sucesso!" << endl;
  } else {
     cout << "Índice inválido!" << endl;
  }
};

void Playlist::removerMusica(int index){  //esta funcao e responsavel por remover as musicas da playlist apartir do index dado pelo usuario
  if (index >= 0 && index < musica.size()) {  //verifica se o index passado e valido
    musica.erase(musica.begin() + index); //apaga o item da lista
    cout << "Música removida com sucesso!" << endl; //retorna uma mensagem caso seja removido
  } else {
    cout << "Índice inválido!" << endl; //e uma de erro caso o index nao se adeque
  }
};
 
void Playlist::printarPlaylist() const{ //printa os elementos da playlist
  int index = 0;  //inteiro utilizado para mostrar o index para o usuario no prompt

  cout << "Nome da Playlist: " << nome << endl; 

  cout << "Musica: " << endl;

  for (const auto& musicas : musica ){  //for com valor auto de musica
    index++;
    cout << index << " " << musicas << endl; //pritando o index e as musicas para o usuario
  }
  
};

ostream& operator<<(ostream& os, const Playlist& playlist){ //sobrecarga de operador para a classe Playlist
  os << "Nome da Playlist: " << playlist.getNome() << endl; 

  return os;
}

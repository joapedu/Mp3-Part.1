#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "../include/lista.h"
#include "../include/playlist.h"

using namespace std;

void readArchive(ifstream& in_file, Lista<Musica>& lista, Lista<Playlist>& playlists){
  string line;

  while(getline(in_file, line)){
    istringstream iss{line};
    string play_titulo;
    if (getline(iss, play_titulo, ';')) {
      Playlist playlist{play_titulo};
      playlists.adicionar(playlist);

      string song_string;
      while(getline(iss, song_string, ',')){
        istringstream iss_song{song_string};
        string musica_titulo;
        string musica_artista;

        if (getline(iss_song, musica_titulo, ':') && getline(iss_song, musica_artista)){
          Musica musica{musica_titulo, musica_artista};
          lista.adicionar(musica);

          playlists.dataT(playlist)->adicionarMusica(musica);
        }
      }
    }
  }
}


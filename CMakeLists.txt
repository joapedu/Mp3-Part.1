cmake_minimum_required(VERSION 3.25.1)
project(mp3Player VERSION 0.2 LANGUAGES CXX )

include_directories( include )


add_executable( mp3
                src/main.cpp
                src/musica.cpp
                src/playlist.cpp
              )

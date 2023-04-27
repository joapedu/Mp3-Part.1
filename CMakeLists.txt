cmake_minimum_required(VERSION 3.16.3)
project(mp3Player VERSION 0.1 LANGUAGES CXX )

include_directories( include )


add_executable( mp3
                src/main.cpp
                src/musica.cpp
              )

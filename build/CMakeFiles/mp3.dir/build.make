# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/mp3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mp3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mp3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mp3.dir/flags.make

CMakeFiles/mp3.dir/src/main.cpp.o: CMakeFiles/mp3.dir/flags.make
CMakeFiles/mp3.dir/src/main.cpp.o: /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/main.cpp
CMakeFiles/mp3.dir/src/main.cpp.o: CMakeFiles/mp3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mp3.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mp3.dir/src/main.cpp.o -MF CMakeFiles/mp3.dir/src/main.cpp.o.d -o CMakeFiles/mp3.dir/src/main.cpp.o -c /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/main.cpp

CMakeFiles/mp3.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mp3.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/main.cpp > CMakeFiles/mp3.dir/src/main.cpp.i

CMakeFiles/mp3.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mp3.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/main.cpp -o CMakeFiles/mp3.dir/src/main.cpp.s

CMakeFiles/mp3.dir/src/musica.cpp.o: CMakeFiles/mp3.dir/flags.make
CMakeFiles/mp3.dir/src/musica.cpp.o: /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/musica.cpp
CMakeFiles/mp3.dir/src/musica.cpp.o: CMakeFiles/mp3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/mp3.dir/src/musica.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mp3.dir/src/musica.cpp.o -MF CMakeFiles/mp3.dir/src/musica.cpp.o.d -o CMakeFiles/mp3.dir/src/musica.cpp.o -c /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/musica.cpp

CMakeFiles/mp3.dir/src/musica.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mp3.dir/src/musica.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/musica.cpp > CMakeFiles/mp3.dir/src/musica.cpp.i

CMakeFiles/mp3.dir/src/musica.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mp3.dir/src/musica.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/src/musica.cpp -o CMakeFiles/mp3.dir/src/musica.cpp.s

# Object files for target mp3
mp3_OBJECTS = \
"CMakeFiles/mp3.dir/src/main.cpp.o" \
"CMakeFiles/mp3.dir/src/musica.cpp.o"

# External object files for target mp3
mp3_EXTERNAL_OBJECTS =

mp3: CMakeFiles/mp3.dir/src/main.cpp.o
mp3: CMakeFiles/mp3.dir/src/musica.cpp.o
mp3: CMakeFiles/mp3.dir/build.make
mp3: CMakeFiles/mp3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable mp3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mp3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mp3.dir/build: mp3
.PHONY : CMakeFiles/mp3.dir/build

CMakeFiles/mp3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mp3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mp3.dir/clean

CMakeFiles/mp3.dir/depend:
	cd /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build /home/eduardo/Documentos/UF/lp1/unidade1/projeto/Mp3-Cpp/build/CMakeFiles/mp3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mp3.dir/depend


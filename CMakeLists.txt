cmake_minimum_required(VERSION 2.6)
#Nom du projet
project(test)
include_directories(${sfml_include_dir})
link_directories(${sfml_lib_dir})
file(
GLOB_RECURSE
source_files
src/*
)
# Déclaration de l'exécutable
add_executable(
    bin/test
    ${source_files}
)
target_link_libraries(
    bin/test
    sfml-graphics
    sfml-window
    sfml-system
)


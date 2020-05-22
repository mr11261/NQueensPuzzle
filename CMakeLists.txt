cmake_minimum_required(VERSION 3.16)
project(NQueensPuzzle)

set(CMAKE_CXX_STANDARD 20)

add_executable(NQueensPuzzle main.cpp src/Application.cpp src/Application.h src/ChessBoard.cpp src/ChessBoard.h)
target_link_libraries(NQueensPuzzle tgui sfml-graphics sfml-window sfml-system)
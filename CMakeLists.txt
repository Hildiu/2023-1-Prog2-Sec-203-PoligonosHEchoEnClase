cmake_minimum_required(VERSION 3.25)
project(P1)

set(CMAKE_CXX_STANDARD 23)

add_executable(P1 main.cpp CTriangulo.cpp CTriangulo.h CCuadrado.cpp CCuadrado.h CHexagono.cpp CHexagono.h CPoligono.cpp CPoligono.h)

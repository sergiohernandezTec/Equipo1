cmake_minimum_required(VERSION 3.30)
project(Equipo1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Equipo1 main.cpp
        Cliente.cpp
        Cliente.h
        Direccion.cpp
        Direccion.h
        MetodoPago.cpp
        MetodoPago.h)

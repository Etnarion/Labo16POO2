cmake_minimum_required(VERSION 3.8)
project(Labo16POO2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Bank.cpp
        Bank.h
        Boat.cpp
        Boat.h
        Container.cpp
        Container.h
        Controller.cpp
        Controller.h
        main.cpp
        Person.cpp
        Person.h
        Role.cpp
        Role.h)

add_executable(Labo16POO2 ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.5)

project(punto11 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(punto11 main.cpp)

install(TARGETS punto11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

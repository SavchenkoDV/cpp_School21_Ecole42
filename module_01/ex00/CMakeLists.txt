cmake_minimum_required(VERSION 3.19)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 main.cpp Zombie.cpp Zombie.hpp newZombie.cpp randomChump.cpp)
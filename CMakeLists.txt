cmake_minimum_required(VERSION 3.22)
project(Test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED 23)

add_executable(Test src/main.cpp 
src/Core.cpp
src/particle/Particle.cpp
src/phase_coordinates/NullCoordinate.cpp)

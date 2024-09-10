cmake_minimum_required(VERSION 3.22)
project(Test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED 23)

set(source_files
src/Core.cpp
src/geometry/PointGeometry.cpp
src/mixture/Mixture.cpp
src/mixture/Nuclide.cpp
src/particle/Particle.cpp
src/phase_coordinates/NullCoordinate.cpp
src/reaction/TestReaction.cpp
src/source/DeterministicSource.cpp
)

add_executable(Test src/main.cpp 
${source_files})

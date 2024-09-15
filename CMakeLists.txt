cmake_minimum_required(VERSION 3.22)
project(Test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED 23)

set(source_files
src/ParticleManager.cpp

src/displacement_manager/SurfaceBasedDisplacer.cpp

src/geometry/PointGeometry.cpp

src/mixture/Mixture.cpp

src/mixture/Nuclide.cpp

src/particle/Particle.cpp

src/phase_coordinates/GeneralCoordinate.cpp
src/phase_coordinates/NVector.cpp

src/reaction/TestReaction.cpp

src/source/DeterministicSource.cpp

src/utils/utils.cpp
)

add_executable(Test src/main.cpp 
${source_files})

#include <iostream>
#include "ParticleManager.h"
#include "phase_coordinates/NVector.h"

int main()
{
    std::cout << "Welcome to the particle transport Monte-Carlo Code"<< std::endl;
    NVector<0> a;
    std::cout<< "Zero vecteur" << a << std::endl;
    return 0;

} 


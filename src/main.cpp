#include <iostream>
#include "Core.h"
#include "phase_coordinates/NVector.h"

int main()
{
    std::cout << "Welcome to the particle transport Monte-Carlo Code"<< std::endl;
    Core core;
    NVector<double,0> a;
    std::cout<< "Zero vecteur" << a << std::endl;
    return 0;

} 


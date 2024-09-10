#pragma once
#include "../phase_coordinates/IPhaseCoordinate.h"

class Particle 
{
//Attributes
private:
    IPhaseCoordinate* phase_coordinate;


//Methods
public:
    Particle();
    Particle(IPhaseCoordinate*);
    ~Particle();

private:

};
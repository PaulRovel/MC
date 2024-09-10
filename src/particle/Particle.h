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
    inline const IPhaseCoordinate* get_coordinate(){return phase_coordinate;};
    void move(double distance);

private:

};
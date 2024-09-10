#pragma once
#include "ISource.h"
#include "../phase_coordinates/IPhaseCoordinate.h"

class DeterministicSource: public ISource
{
//Attributes
private:
    IPhaseCoordinate* coordinate;
//Methods
public:
    DeterministicSource(IPhaseCoordinate* coordinate);
    ~DeterministicSource();
    Particle* get_new_particle();

private:
};
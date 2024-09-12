#pragma once
#include "../phase_coordinates/IPhaseCoordinate.h"
#include "../particle/Particle.h"

class IReaction
{
//Attributes
private:
//Methods
public:
    virtual ~IReaction(){};
    virtual double get_cross_section_at(const IPhaseCoordinate* coord)=0;
    virtual void handle_collision(Particle* particle)=0;

private:
};
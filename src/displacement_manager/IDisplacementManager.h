#pragma once

class IDisplacementManager;

#include "../particle/Particle.h"

class IDisplacementManager
{
//Attributes
private:
//Methods
public:
    virtual ~IDisplacementManager(){};
    virtual void transport_particle(Particle* particle)=0;

private:
};
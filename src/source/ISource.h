#pragma once
#include "../particle/Particle.h"

class ISource
{
//Attributes
private:
//Methods
public:
    virtual ~ISource()=0;
    virtual Particle* get_new_particle()=0;

private:
};
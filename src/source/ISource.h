#pragma once
#include "../particle/Particle.h"

class ISource
{
//Attributes
private:
//Methods
public:
    virtual ~ISource(){};
    virtual Particle* get_new_particle()=0;

private:
};
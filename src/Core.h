#pragma once
#include <vector>
#include <set>

class Core;

#include "particle/Particle.h"

class Core
{
//Attributes
private:
    std::vector<Particle*> particles;
    std::set<Particle*> active_particles;

public:
    Core();
    ~Core();
    void add_particle(Particle* particle);
    void de_activate_particle(Particle* particle);

private:
};
#pragma once
#include <vector>
#include <set>

class ParticleManager;

#include "particle/Particle.h"
#include "displacement_manager/IDisplacementManager.h"

class ParticleManager
{
//Attributes
private:
    std::vector<Particle*> particles;
    std::vector<Particle*> active_particles;
    IDisplacementManager* displacement_manager;

public:
    ParticleManager(IDisplacementManager* displacement_manager);
    ~ParticleManager();
    void add_particle(Particle* particle);
    void add_particles(const std::vector<Particle*>& particles);
    void simulate();

private:
};
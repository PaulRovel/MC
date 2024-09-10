#include "Core.h"


Core::Core()
:particles(std::vector<Particle*>()),active_particles(std::set<Particle*>()) 
{
    // Constructeur
    Particle::set_core(this);
}

Core::~Core() {
    // Destructeur
    for(Particle* particle:this->particles)
    {
        delete particle;
    }
}

void Core::add_particle(Particle *particle)
{
    this->particles.push_back(particle);
    this->active_particles.insert(particle);
}

void Core::de_activate_particle(Particle *particle)
{
    this->active_particles.erase(particle);
}

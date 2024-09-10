#include "Particle.h"


Particle::Particle(IPhaseCoordinate* phase_coordinate)
{
    // Constructor that sets the initial coordinate of the particle.
    this->phase_coordinate = phase_coordinate;
    Particle::core->add_particle(this);
}

Particle::~Particle() {
    // Destructeur
    delete this->phase_coordinate;
}

void Particle::move(double distance)
{
    this->phase_coordinate->move(distance);
    //TODO: Here register the movement of the particle.
}

void Particle::de_activate()
{
    Particle::core->de_activate_particle(this);
}

Core* Particle::core = nullptr;

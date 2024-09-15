#include "Particle.h"


Particle::Particle(IPhaseCoordinate* phase_coordinate)
:phase_coordinate(phase_coordinate),_is_active(true)
{
    // Constructor that sets the initial coordinate of the particle.
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
    this->_is_active = false;
    //TODO: Here register de-activation.
}

ParticleManager* Particle::core = nullptr;

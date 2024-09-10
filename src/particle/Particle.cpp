#include "Particle.h"
#include "../phase_coordinates/NullCoordinate.h"

Particle::Particle() {
    // Constructeur
    this->phase_coordinate = new NullCoordinate(); // By default create a null coordinate
}

Particle::Particle(IPhaseCoordinate* phase_coordinate)
{
    // Constructor that sets the initial coordinate of the particle.
    this->phase_coordinate = phase_coordinate;
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

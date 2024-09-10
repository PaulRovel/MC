#include "DeterministicSource.h"

DeterministicSource::DeterministicSource(IPhaseCoordinate *coordinate)
{
    this->coordinate = coordinate;
}

DeterministicSource::~DeterministicSource()
{
    delete this->coordinate;
}

Particle* DeterministicSource::get_new_particle()
{
    return new Particle(this->coordinate->copy());
}

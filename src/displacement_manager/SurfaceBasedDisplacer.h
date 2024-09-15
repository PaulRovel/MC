#pragma once
#include "IDisplacementManager.h"
#include "../geometry/IGeometry.h"

class SurfaceBasedDisplacer : public IDisplacementManager
{
//Attributes
private:
    IGeometry* geometry;
//Methods
public:
    SurfaceBasedDisplacer(IGeometry* geometry);
    ~SurfaceBasedDisplacer();
    void transport_particle(Particle* particle);

private:
};
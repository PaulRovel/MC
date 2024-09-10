#pragma once
#include "../mixture/Mixture.h"
#include "../phase_coordinates/IPhaseCoordinate.h"

class IGeometry
{
public:
    virtual ~IGeometry(){};
    virtual Mixture* get_mixture_at_coordinate(IPhaseCoordinate*) = 0;
private:
};
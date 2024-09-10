#pragma once
#include "IGeometry.h"
#include "../mixture/Mixture.h"

class PointGeometry: public IGeometry
{
//Attributes
private:
    Mixture* mixture;
//Methods
public:
    PointGeometry(Mixture*);
    ~PointGeometry();
    Mixture* get_mixture_at_coordinate(const IPhaseCoordinate*);
    double distance_to_next_zone(const IPhaseCoordinate* current_coordinate);
private:
};
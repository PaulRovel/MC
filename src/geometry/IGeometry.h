#pragma once
#include "../mixture/Mixture.h"
#include "../phase_coordinates/IPhaseCoordinate.h"
#include <optional>

class IGeometry
{
public:
    virtual ~IGeometry(){};
    virtual std::optional<Mixture*> get_mixture_at_coordinate(const IPhaseCoordinate*) = 0;
    virtual double distance_to_next_zone(const IPhaseCoordinate* current_coordinate) = 0;
private:
};
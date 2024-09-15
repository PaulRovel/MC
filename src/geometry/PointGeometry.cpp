#include "PointGeometry.h"
#include "math.h"

PointGeometry::PointGeometry(Mixture* mixture) {
    // Constructeur
    this->mixture = mixture;
}

PointGeometry::~PointGeometry() {
    // Destructeur
    delete this->mixture;
}

std::optional<Mixture*> PointGeometry::get_mixture_at_coordinate(const IPhaseCoordinate* coord){
    return this->mixture;
}

double PointGeometry::distance_to_next_zone(const IPhaseCoordinate *current_coordinate)
{
    return INFINITY;
}

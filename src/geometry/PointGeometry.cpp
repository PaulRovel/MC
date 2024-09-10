#include "PointGeometry.h"

PointGeometry::PointGeometry(Mixture* mixture) {
    // Constructeur
    this->mixture = mixture;
}

PointGeometry::~PointGeometry() {
    // Destructeur
    delete this->mixture;
}

Mixture* PointGeometry::get_mixture_at_coordinate(IPhaseCoordinate* coord){
    return this->mixture;
}
#include "NullCoordinate.h"

NullCoordinate::NullCoordinate() {
    // Constructeur
}

NullCoordinate::~NullCoordinate() {
    // Destructeur
}

NullCoordinate *NullCoordinate::copy()
{
    return new NullCoordinate;
}

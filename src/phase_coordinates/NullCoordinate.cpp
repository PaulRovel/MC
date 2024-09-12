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

int NullCoordinate::get_spatial_dimension()
{
    return 0;
}

bool NullCoordinate::is_mono_kinetic()
{
    return true;
}

double NullCoordinate::get_energy()
{
    return 0.0; //By default return 0 for the energy
}

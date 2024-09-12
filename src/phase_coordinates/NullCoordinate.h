#pragma once
#include "IPhaseCoordinate.h"

//This class is a coordinate that can’t move 
class NullCoordinate : public IPhaseCoordinate
{
public:
    NullCoordinate();
    ~NullCoordinate();
    NullCoordinate* copy();
    void move(double distance){};
    int get_spatial_dimension();
    bool is_mono_kinetic();
    double get_energy();

private:
};
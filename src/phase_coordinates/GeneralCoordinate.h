#pragma once
#include "IPhaseCoordinate.h"
#include "NVector.h"

template<int spatial_dimension, bool mono_kinetic>
class GeneralCoordinate: public IPhaseCoordinate
{
//Attributes
private:
    NVector<double,spatial_dimension> position;
    NVector<double,spatial_dimension> orientation;
    double energy;
//Methods
public:
    GeneralCoordinate(NVector<double,spatial_dimension> position,
        NVector<double,spatial_dimension> orientation,
        double energy)
    :position(position),orientation(orientation),energy(energy){};
    int get_spatial_dimension(){return spatial_dimension;};
    bool is_mono_kinetic(){return mono_kinetic;};
    bool get_energy(){return energy;};
    const NVector<double,spatial_dimension>& get_position() {return position;};
    const NVector<double,spatial_dimension>& get_orientation() {return orientation;};
    GeneralCoordinate* copy(){return new GeneralCoordinate(position,orientation,energy);};

    void move(double distance){position+=distance*orientation;};

private:
};

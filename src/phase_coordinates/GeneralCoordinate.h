#pragma once
#include "IPhaseCoordinate.h"
#include "NVector.h"

template<int spatial_dimension>
class GeneralCoordinate: public IPhaseCoordinate
{
//Attributes
private:
    NVector<spatial_dimension> position;
    NVector<spatial_dimension> orientation;
    double energy;
    bool mono_kinetic;
//Methods
public:
    // Contructors
    GeneralCoordinate(NVector<spatial_dimension> position,
        NVector<spatial_dimension> orientation,
        double energy, bool mono_kinetic)
    :position(position),orientation(orientation),energy(energy), mono_kinetic(mono_kinetic){};
    GeneralCoordinate* copy() const {return new GeneralCoordinate(position,orientation,energy,mono_kinetic);};

    //Interface getters
    int get_spatial_dimension() const {return spatial_dimension;};
    bool is_mono_kinetic() const {return mono_kinetic;};
    bool get_energy() const {return energy;};

    //Other getters
    const NVector<spatial_dimension>& get_position() const {return position;};
    const NVector<spatial_dimension>& get_orientation() const {return orientation;};
    
    //Interface modifiers
    void move(double distance){position+=distance*orientation;};
    void deflect_isotropic() {this->orientation.deflect_isotropic();};
    void deflect_mu(double mu) {this->orientation.deflect_mu(mu);};

private:
};

#pragma once

class IPhaseCoordinate
{
public:
    //Constructors
    virtual ~IPhaseCoordinate(){};
    virtual IPhaseCoordinate* copy() const =0;
    
    //getters
    virtual int get_spatial_dimension() const =0;
    virtual bool is_mono_kinetic() const =0;
    virtual double get_energy() const =0;

    //modifiers
    virtual void move(double distance)=0;
    virtual void deflect_isotropic()=0;
    virtual void deflect_mu(double mu)=0;

private:
};
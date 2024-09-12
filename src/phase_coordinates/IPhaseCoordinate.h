#pragma once

class IPhaseCoordinate
{
public:
    virtual ~IPhaseCoordinate(){};
    virtual IPhaseCoordinate* copy()=0;
    virtual void move(double distance)=0;
    virtual int get_spatial_dimension()=0;
    virtual bool is_mono_kinetic()=0;
    virtual double get_energy()=0;

private:
};
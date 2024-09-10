#pragma once
#include "../phase_coordinates/IPhaseCoordinate.h"

class IReaction
{
//Attributes
private:
//Methods
public:
    virtual ~IReaction(){};
    virtual double get_cross_section_at(IPhaseCoordinate* coord)=0;

private:
};
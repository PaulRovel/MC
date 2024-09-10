#pragma once
#include <vector>
#include "../reaction/IReaction.h"
#include "../phase_coordinates/IPhaseCoordinate.h"

class Nuclide
{
//Attributes
public:
    std::vector<IReaction*> reactions;
private:
//Methods
public:
    Nuclide();
    ~Nuclide();
    void add_reaction(IReaction*);
    double get_total_cross_section_at(const IPhaseCoordinate* coord);

private:
};
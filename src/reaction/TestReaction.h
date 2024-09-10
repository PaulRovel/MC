#pragma once
#include "IReaction.h"

class TestReaction: public IReaction
{
//Attributes
private:
    double cross_section;
//Methods
public:
    TestReaction();
    ~TestReaction();
    double get_cross_section_at(IPhaseCoordinate* coord);

private:
};
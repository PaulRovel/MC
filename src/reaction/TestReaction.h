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
    double get_cross_section_at(const IPhaseCoordinate* coord);
    void handle_collision(Particle* particle);

private:
};
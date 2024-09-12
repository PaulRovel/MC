#include "TestReaction.h"

TestReaction::TestReaction() {
    // Constructeur
    this->cross_section = 1.0;
}

TestReaction::~TestReaction() {
    // Destructeur
}

double TestReaction::get_cross_section_at(const IPhaseCoordinate *coord)
{
    return this->cross_section;
}

void TestReaction::handle_collision(Particle *particle)
{
    //TODO: Implement this
}

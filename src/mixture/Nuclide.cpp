#include "Nuclide.h"

Nuclide::Nuclide() {
    // Constructeur
    this->reactions = std::vector<IReaction*>();
}

Nuclide::~Nuclide() {
    // Destructeur
    for(IReaction* reaction:this->reactions)
    {
        delete reaction;
    }
}

void Nuclide::add_reaction(IReaction* reaction)
{
    this->reactions.push_back(reaction);
}

double Nuclide::get_total_cross_section_at(const IPhaseCoordinate *coord)
{
    double result = 0;
    for (IReaction* reaction : this->reactions)
    {
        result += reaction->get_cross_section_at(coord);
    }
    return result;
}

void Nuclide::handle_collision(Particle *particle)
{
    //TODO: implement this
}

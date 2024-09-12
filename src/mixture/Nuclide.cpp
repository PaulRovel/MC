#include "Nuclide.h"
#include "../utils/utils.h"


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
    std::vector<double> xsection_array = std::vector<double>(this->reactions.size());
    for (int i = 0; i < this->reactions.size(); i++)
    {
        xsection_array[i] = this->reactions[i]->get_cross_section_at(particle->get_coordinate());
    }

    int i = draw_from_array(xsection_array);
    this->reactions[i]->handle_collision(particle);
}

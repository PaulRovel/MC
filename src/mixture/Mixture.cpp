#include "Mixture.h"
#include "../utils/utils.h"

Mixture::Mixture(std::vector<Nuclide*> nuclides, std::vector<double> concentrations)
:nuclides(nuclides), concentrations(concentrations)
{}

Mixture::~Mixture()
{
    // Destructeur
}

double Mixture::get_total_macro_cross_section_at(const IPhaseCoordinate *coord)
{
    double total_macro_cross_section = 0;
    for (int i = 0; i < this->nuclides.size(); i++)
    {
        Nuclide* nuclide = this->nuclides[i];
        double concentration = this->concentrations[i];
        total_macro_cross_section += concentration * nuclide->get_total_cross_section_at(coord);
    }
    return total_macro_cross_section;
}

void Mixture::handle_collision(Particle* particle)
{
    std::vector<double> xsection_array = std::vector<double>(this->nuclides.size());
    for (int i = 0; i < this->nuclides.size(); i++)
    {
        Nuclide* nuclide = this->nuclides[i];
        double concentration = this->concentrations[i];
        xsection_array[i] = concentration * nuclide->get_total_cross_section_at(particle->get_coordinate());
    }

    int i = draw_from_array(xsection_array);
    this->nuclides[i]->handle_collision(particle);

}

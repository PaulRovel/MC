#include "Mixture.h"

Mixture::Mixture(std::vector<Nuclide*> nuclides, std::vector<double> concentrations)
:nuclides(nuclides), concentrations(concentrations)
{}

Mixture::~Mixture()
{
    // Destructeur
}

double Mixture::get_total_macro_cross_section_at(IPhaseCoordinate *coord)
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

#pragma once
#include <vector>
#include "Nuclide.h"
#include "../particle/Particle.h"

class Mixture
{
//Attributes
private:
    std::vector<Nuclide*> nuclides;
    std::vector<double> concentrations;
public:
    Mixture(std::vector<Nuclide*> nuclides, std::vector<double> concentrations);
    ~Mixture();
    double get_total_macro_cross_section_at(const IPhaseCoordinate* coord);
    void handle_collision(Particle* particle);

private:
};
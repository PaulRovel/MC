#include "SurfaceBasedDisplacer.h"
#include <random>


SurfaceBasedDisplacer::SurfaceBasedDisplacer(IGeometry* geometry)
:geometry(geometry)
{
    // Constructeur
}

SurfaceBasedDisplacer::~SurfaceBasedDisplacer() {
    // Destructeur
    delete this->geometry;
}

void SurfaceBasedDisplacer::transport_particle(Particle *particle)
{
    //TODO: manage random number generator in a separated way.
    std::random_device rd; 
    std::mt19937 rng (rd ());
    
    while (true)
    {
        Mixture* current_mixture = this->geometry->get_mixture_at_coordinate(particle->get_coordinate());
        //TODO: Check for out of geometry
        double total_xs = current_mixture->get_total_macro_cross_section_at(particle->get_coordinate());
        std::exponential_distribution<> distribution (total_xs);

        double stopping_distance = distribution(rng);
        double distance_to_next_interface = this->geometry->distance_to_next_zone(particle->get_coordinate());
        if (stopping_distance > distance_to_next_interface)
        {
            particle->move(distance_to_next_interface);
        }else
        {
            current_mixture->handle_collision(particle);
            return;
        }
        
        

    }
    
    
    
    
    
}

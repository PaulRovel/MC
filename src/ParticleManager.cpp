#include "ParticleManager.h"


ParticleManager::ParticleManager(IDisplacementManager* displacement_manager)
:particles(std::vector<Particle*>()),active_particles(std::vector<Particle*>()),displacement_manager(displacement_manager) 
{
    // Constructeur
    Particle::set_core(this);
}

ParticleManager::~ParticleManager() {
    // Destructeur
    for(Particle* particle:this->particles)
    {
        delete particle;
    }
    delete displacement_manager;
}

void ParticleManager::add_particle(Particle *particle)
{
    this->particles.push_back(particle);
    this->active_particles.push_back(particle);
}

void ParticleManager::add_particles(const std::vector<Particle *>& particles)
{
    this->particles.reserve(this->particles.size()+particles.size());
    this->active_particles.reserve(this->active_particles.size()+particles.size());

    this->particles.insert(this->particles.end(),particles.begin(),particles.end());
    this->active_particles.insert(this->active_particles.end(),particles.begin(),particles.end());
}

void ParticleManager::simulate()
{
    while (this->active_particles.size())
    {
        Particle* current_particle = this->active_particles.back();
        this->active_particles.pop_back();
        while (current_particle->is_active())
        {
            //Does displacement and then collision
            this->displacement_manager->transport_particle(current_particle); 
        }
        
    }
    
}

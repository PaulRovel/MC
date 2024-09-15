#pragma once

class Particle;

#include "../phase_coordinates/IPhaseCoordinate.h"
#include "../ParticleManager.h"

class Particle 
{
//Attributes
private:
    static ParticleManager* core;

    IPhaseCoordinate* phase_coordinate;
    bool _is_active;


//Methods
public:
    Particle(IPhaseCoordinate*);
    ~Particle();
    inline const IPhaseCoordinate* get_coordinate() const {return phase_coordinate;};
    void move(double distance);
    void de_activate();
    inline bool is_active() const {return _is_active;};


    inline static void set_core(ParticleManager* newcore){core = newcore;};


private:

};
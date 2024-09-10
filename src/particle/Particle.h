#pragma once
#include "../phase_coordinates/IPhaseCoordinate.h"
#include "../Core.h"

class Particle 
{
//Attributes
private:
    static Core* core;

    IPhaseCoordinate* phase_coordinate;


//Methods
public:
    Particle(IPhaseCoordinate*);
    ~Particle();
    inline const IPhaseCoordinate* get_coordinate(){return phase_coordinate;};
    void move(double distance);
    void de_activate();


    inline static void set_core(Core* newcore){core = newcore;};


private:

};
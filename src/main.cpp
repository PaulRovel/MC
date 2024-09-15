#include <iostream>
#include <vector>
#include "ParticleManager.h"
#include "displacement_manager/SurfaceBasedDisplacer.h"
#include "geometry/PointGeometry.h"
#include "mixture/Nuclide.h"
#include "reaction/TestReaction.h"  
#include "source/DeterministicSource.h"
#include "phase_coordinates/GeneralCoordinate.h"

int main()
{
    std::cout << "Welcome to the particle transport Monte-Carlo Code"<< std::endl;
    TestReaction* reaction = new TestReaction;
    Nuclide* nuclide = new Nuclide;
    nuclide->add_reaction(reaction);
    Mixture* mixture = new Mixture({nuclide},{1.0});
    PointGeometry* geom = new PointGeometry(mixture);
    SurfaceBasedDisplacer* displacer = new SurfaceBasedDisplacer(geom);
    ParticleManager manager(displacer);

    NVector<0> a;
    GeneralCoordinate<0>* initial_coord = new GeneralCoordinate<0>(a, a, 10.0 , true);

    DeterministicSource source(initial_coord);
    source.get_new_particle(); //Here the particle is automatically added (maybe fix this ?)
    manager.simulate();

    return 0;

} 


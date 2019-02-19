#ifndef STAR_H
#define STAR_H
#include <iostream>
#include <cstdlib>

class Star{
	private:
        int current_planets;
        int next_id;
	public:
        Planet ** planets;
        Star(int);
        bool addPlanet();
        Planet getFurthest();
        void orbit();
        void printStarInfo();
        int getCurrentNumPlanets();
        
        //you may add any additional methods you may need.
		bool removePlanet();
};


#endif

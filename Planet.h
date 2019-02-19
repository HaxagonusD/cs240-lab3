#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include <cstdlib>
class Planet{
	private:
		int id;
		int pos;
		int distance;
		char type
	public:

		Planet(int,int);
    	int orbit();
		int getID();
    	int getDistance();
    	int getPos();
		char getType();
		//you may add any additional methods you may need.
};
#endif

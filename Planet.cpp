#include "Planet.h"
using namespace std;
//methods for Planet class
Planet::Planet(int distance, int id){
	this->id = id;
	this->distance = rand() % 3001;
    this->pos = rand() % 360;
	char typeArray = ['g', 'h', 'r'];
	this->type = typeArray[rand() % 3]
}

int Planet::getID(){
	return id;
}
int Planet::getPos(){
	return pos;
}

int Planet::getDistance(){
	return this->distance;
}

int Planet::orbit(){
	pos++;
	if(pos > 359){
		pos = 0;
	}
	return pos;
}

char Planet::getType(){
	return this->type;
}

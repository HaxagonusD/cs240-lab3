#include "Star.h"

using namespace std;


//methods for Star class
Star::Star(){
	this->planets = NULL;
	this->current_planets = 0;
	this->next_id = 0;
}
Star::~Star(){
	for(int i = 0; i < sizeof(this->planets)/sizeof(this->planets[0]); i++){
		delete planet[i];
	}
}

int Star::addPlanet(){
	if(current_planets != max_planets){
		Planet ** tempArray = new Planet*[this->current_planets];
		for(int i = 0; i < sizeof(this->planets)/sizeof(this->planets[0]); i++){
			tempArray[i] = this->planets[i];
		}
		Planet * temp = new Planet(rand() % 3001, next_id);
		tempArray[sizeof(this->planets)/sizeof(this->planets[0])] = temp;
		delete planets;
		planets = tempArray;
		current_planets++;
		next_id++;
		return temp->id;
	} else {
		return -1;
	}
}

void Star::orbit(){
	for(int i = 0; i < sizeof(planets)/sizeof(planets[0]); i++){
		planets[i].orbit();
	}
}

void Star::printStarInfo(){
	cout << "The star currently has " << getCurrentNumPlanets() << " planets." << endl;
	cout << "The star can support up to " << getMaxPlanets() << " planets." << endl;
	cout << "Planets:" << endl;
	cout << "        ";
	cout << "";
	for(int i = 0; i < getCurrentNumPlanets(); i++){
		cout << "        ";
		cout << "Planet " << i << " is " << planets[i].getDistance() << " away at position " << planets[i].getPos() << " around the star." << endl;
	}
}


Planet Star::getFurthest(){
	Planet furthest(0,0);
	for(int i = 0; i < current_planets; i++){
		if(planets[i].getDistance() > furthest.getDistance()){
			furthest = planets[i];
		}
	}
	return furthest;
}
int Star::getCurrentNumPlanets(){
	return current_planets;
}

bool Star::removePlanet(int x){
	Planet ** temp = new Planet * [sizeof(this->planets)/sizeof(this->planets[0])-1];
	int counter = 0;
	bool itsin = false;
	for(int i = 0; i < sizeof(this->planets)/sizeof(this->planets[0]; i++){
		if(this->planets[i]->id == x){
			// temp[counter] = this->planet[i];
			// counter++;
			itsin = true;
		}
	}
	if(itsin){
		for(int i =0; i < sizeof(this->planets)/sizeof(this->planets[0]; i++){
			if(this->planets[i]->id == x){
				temp[counter] = this->planet[i];
				counter++;
			}
		}

		delete this->planets;
		this->current_planets--;
		this->planets = temp
		return true
	} else{
		return false;
	}

}

Planet * Star::getPlanet(int x){
	Planet * targetPlanet = NULL;
	for(int i = 0; i < sizeof(this->planets)/sizeof(this->planets[0]); i++ ){
		if(this->planets[i]->id == x){
			targetPlanet = this->planets[i];
		}
	}
	return targetPlanet;
}

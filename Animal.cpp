#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

Animal::Animal (int legs, bool alive, string species){
	number_of_legs = legs;
	is_alive = alive;
	species = spec;
}
Animal::~Animal(){
	//Leaving Empty	
}
Animal::Animal() : number_of_legs(4), is_alive(true), species("cat"){
// Which is the same as this
// Animal::Animal(){
	// set_legs(4);
	// set_alivea(true);
	// set_species(cat;
// }
}
void Animal:: set_legs(int legs){
	number_of_legs = legs;
}
int Animal::get_legs(){

return number_of_legs;	
}
void Animal::set_alive(bool alive){
	is_alive = alive;
}
bool Animal::get_alive(){

return is_alive;	
}
void Animal::set_species(string spec){
	species = spec;
}
string Animal::get_species(){

return species;
}
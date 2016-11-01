//! Header file for a Ring object
#pragma once
#include "Item.h"

class Ring :public Item {
public:
	//! Default Constructor
	Ring();
	//! Constructor taking 3 parameters (the name of the ring, the type and its enhancement vector (ARM, STR, CON, WIS, CHA)
	Ring(string nameRing, string type, vector<Enhancement> myinfluence);
	//! Prints stats of the ring
	void showStats();

};
